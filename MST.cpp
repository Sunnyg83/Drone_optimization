#include "MST.h"
#include <iostream>
#include <vector>
#include <limits>
using namespace std;

void MSTSolver::computeMST() {
    int n =  g.numNodes; 
    vector<bool> inMst(n,false); // create n sized vector and all vals are initially false
    vector<int> minEdge(n, numeric_limits<int>::max()); // create a vector size n named minEdge initialized to largest possible values
    minEdge[0] = 0; // set start node key value to 0, so we start from node 0
    totalCost = 0;
    mstEdges.clear(); // only store edges for current run
    vector<int> parent(n, -1); // for each node store index of node's parent in MST

    for(int count = 0; count < n-1; count++) { // need to add n-1 edges to connect all n nodes
        u  = -1;// index var
        for (int v = 0; v < n; v++) {
            if(!inMst[v] && (u == -1 || minEdge[v] < minEdge[u])) // if you have node v with smaller val, this is new best
                u = v;
        }
    }
    // now mark u as part of the MST
        inMst[u] = true;
    
    // if it is not the parent node, record the edges update totalcost
    if (parent[u] != -1) {
        mstEdges.push_back({parent[u], u});
        totalCost += g.adjMatrix[parent[u]][u]; // g.adjMatrix[i][j] stores weight
    }
    // update parent and minedge for all nodes not in MST, if new node gives less cost to a node
    // check if edge from added node u to all other nodes v: 
        // check to see if they are present (weight is not 0)
        // chepaer than the current best way to connect v to MST
        for (int v = 0; v < n; v++) {
            int weight = g.adjMatrix[u][v];

        }
}