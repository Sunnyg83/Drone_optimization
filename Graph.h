#ifndef GRAPH_H
#define GRAPH_H
#include <vector>
class Graph {
public:
    int numNodes;
    std::vector<std::vector<int>> adjMatrix; // 2D vector = matrix
    Graph(int n);
    void input();
    void display(const std::vector<std::string>& labels) const;
};
#endif // GRAPH_H 