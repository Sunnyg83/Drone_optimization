#include "Graph.h"
#include <iostream>
#include <iomanip> // for spacing
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

void Graph::display(const vector<string>& labels) const {
    cout << "Adjacency Matrix:\n" << setw(8) << "";
    for (const auto& label : labels) {
        cout << setw(8) << label;
    }
    cout << "\n";
    for (int i = 0; i < numNodes; ++i) {
        cout << setw(8) << labels[i];
        for (int j = 0; j < numNodes; ++j) {
            cout << setw(8) << adjMatrix[i][j];
        }
        cout << "\n";
    }
} 