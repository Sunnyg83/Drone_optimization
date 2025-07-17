#include "TSP.h"
#include <iostream>
#include <vector>
#include <limits>
using namespace std;

TSPSolver::TSPSolver(const Graph& graph) : g(graph) {}

void TSPSolver::calculateTSP(int startNode) {
    int n = g.numNodes;
    vector<vector<int>> adj = g.adjMatrix;
    vector<bool> visited(n, false); // never visit same loc twice
    tspRoute.clear(); // clear at start of new calculation
    distance = 0; // start total route distance at 0.
    int current = startNode; //begins at user specified loc
    tspRoute.push_back(current); // route begins with loc chosen by user
    visited[current] = true;
    for(int step = 1; step < n; step++) { // visit all other loc except starting so go through n-1
        int next = -1; // hold index of next loc to visit (-1 = not visited yet)
        int minDist = numeric_limits<int>::max(); // set min dist to inf (largest val)
        for(int i = 0; i < n; i++) {
            if(!visited[i] && adj[current][i] < minDist) { 
                minDist = adj[current][i];
                next = i;
            }
        }  // find nearest unvisited node

        tspRoute.push_back(next); // add next node to TSP route
        distance += minDist; // add distance to next to total distance
        visited[next] = true;
        current = next;
    } 
    tspRoute.push_back(startNode); // return back to starting node  - add to route
    distance += adj[current][startNode]; // add distance from last non start node to start
}

void TSPSolver::displayTSP() const {
    cout << "TSP Route: ";
    // print each node in the route
    for (size_t i = 0; i < tspRoute.size(); i++) {
        cout << tspRoute[i];
        if (i != tspRoute.size() - 1) {
            cout << " -> ";
        } // no arrow after last element
    }
    cout << endl;
    // print the total distance
    cout << "Total Distance: " << distance << endl;

}
