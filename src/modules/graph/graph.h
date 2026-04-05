#include <vector>

class Graph {
public:
    Graph(int V);
    ~Graph();
    int V;
    std::vector<std::vector<int>> adj;
    virtual void add_edge(int u, int v);
    void print_edges();
};