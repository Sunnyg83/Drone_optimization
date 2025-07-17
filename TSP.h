#ifndef TSP_H
#define TSP_H
#include "Graph.h"
#include <vector>

class TSPSolver {
public:
    TSPSolver(const Graph& graph);
    void calculateTSP(int startNode);
    void displayTSP() const;
private:
    const Graph& g;
    std::vector<int> tspRoute;
    int distance = 0;
};

#endif