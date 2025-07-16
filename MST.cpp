#include "MST.h"
#include <iostream>
#include <vector>
#include <limits>
using namespace std;

MSTSolver::MSTSolver(const Graph& graph) : g(graph) {} // constructor

void MSTSolver::computeMST() { // Prim's algo
    int n =  g.numNodes; 
    vector<bool> inMst(n,false); // create n sized vector and all vals are initially false
    vector<int> minEdge(n, numeric_limits<int>::max()); // create a vector size n named minEdge initialized to largest possible values
    minEdge[0] = 0; // set start node key value to 0, so we start from node 0
    totalCost = 0;
    mstEdges.clear(); // only store edges for current run
    vector<int> parent(n, -1); // for each node store index of node's parent in MST

    for (int count = 0; count < n; count++) { // run n times to ensure all nodes are processed
        int u = -1;
        for (int v = 0; v < n; v++) {
            if(!inMst[v] && (u == -1 || minEdge[v] < minEdge[u])) // if you have node v with smaller val, this is new best
                u = v;
        }
        if (u == -1) break; // all nodes processed
        inMst[u] = true;
    
    // onyl add edge if not starting node
    if (parent[u] != -1) {
        mstEdges.push_back({parent[u], u});
        totalCost += g.adjMatrix[parent[u]][u]; // g.adjMatrix[i][j] stores weight
    }
    // update best way to connect remaining nodes to MST
        for (int v = 0; v < n; v++) {
            int weight = g.adjMatrix[u][v];
            if (weight && !inMst[v] && weight < minEdge[v]) { // check if edge from u to v is smaller than current best way to connect v to MST
                minEdge[v] = weight;
                parent[v] = u;
            }
        }
    }
}

void MSTSolver::displayMST() const {
    cout << "MST edges (parent - node):\n";
    for (const auto&edge : mstEdges) {
        cout << edge.first << " - " << edge.second << " (weight: " << g.adjMatrix[edge.first][edge.second] << ")\n";
    }
    cout << "Total cost of MST: " << totalCost << endl;
}