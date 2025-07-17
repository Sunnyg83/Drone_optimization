#include <iostream>
#include "Graph.h"
#include "MST.h"
#include "TSP.h"

int main() {
    int n;
    std::cout << "Enter number of delivery points: ";
    std::cin >> n;
    Graph g(n);
    g.input();

    while (true) {
        std::cout << "\nMenu:\n";
        std::cout << "1. Display adjacency matrix\n";
        std::cout << "2. Run MST (Minimum Spanning Tree)\n";
        std::cout << "3. Run TSP (Traveling Salesman Problem)\n";
        std::cout << "4. Exit\n";
        std::cout << "Enter your choice: ";
        int choice;
        std::cin >> choice;
        if (choice == 1) {
            g.display();
        } else if (choice == 2) {
            MSTSolver mst(g);
            mst.computeMST();
            mst.displayMST();
        } else if (choice == 3) {
            int startNode;
            std::cout << "Enter starting node (0 to " << n-1 << "): ";
            std::cin >> startNode;
            if (startNode < 0 || startNode >= n) {
                std::cout << "Invalid starting node.\n";
            } else {
                TSPSolver tsp(g);
                tsp.calculateTSP(startNode);
                tsp.displayTSP();
            }
        } else if (choice == 4) {
            break;
        } else {
            std::cout << "Invalid choice. Try again.\n";
    }
    }
    return 0;
}