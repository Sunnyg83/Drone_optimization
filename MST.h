#ifndef MST_H
#define MST_H
#include "Graph.h" // use to access graph data
#include <vector>
#include <utility>

class MSTSolver {
public:
    MSTSolver(const Graph& graph);
    void computeMST();
    void displayMST() const;
private:
    const Graph& g;
    std::vector<std::pair<int, int>> mstEdges; // edges in MST (u, v)
    int totalCost = 0;
};

#endif // MST_H 