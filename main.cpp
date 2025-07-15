#include <iostream>
#include "Graph.h"

int main() {
    int n;
    std::cout << "Enter number of delivery points: ";
    std::cin >> n;
    Graph g(n);
    g.input();
    g.display();
    return 0;
}