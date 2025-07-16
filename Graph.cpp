#include "Graph.h"
#include <iostream>
using namespace std;

Graph::Graph(int n) : numNodes(n), adjMatrix(n, vector<int>(n)) {}

void Graph::input() {
    cout << "Enter adjacency matrix (use 0 for no direct connection):\n";
    for (int i = 0; i < numNodes; i++) {
        for (int j = 0; j < numNodes; j++) {
            cin >> adjMatrix[i][j];
        }
    }
}

void Graph::display() const {
    cout << "Adjacency Matrix:\n";
    for (const auto& row : adjMatrix) {
        for (int val : row) {
            cout << val << " ";
        }
        cout << "\n";
    }
} 