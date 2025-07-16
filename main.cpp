#include <iostream>
#include "Graph.h"
#include "MST.h"

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
        std::cout << "3. Exit\n";
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
            break;
        } else {
            std::cout << "Invalid choice. Try again.\n";
        }
    }
    return 0;
}