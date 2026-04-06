#include <vector>

class Graph {
public:
    Graph(int V);
    ~Graph();
    int V;
    std::vector<std::vector<std::pair<int, int>>> adj;
    virtual void add_edge(int u, int v, int w);
    void print_edges();
};