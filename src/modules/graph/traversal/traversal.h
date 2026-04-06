#include "../graph.h"

class Traversal {
private:
public:
    Traversal();
    ~Traversal();
    virtual std::vector<int> execute(Graph graph, int start_node) { return std::vector<int>(); };
};

class BreadthFirstSearch : public Traversal {
private:
public:
    BreadthFirstSearch();
    ~BreadthFirstSearch();

    std::vector<int> execute(Graph graph, int start_node) override;
};

class DepthFirstSearch : public Traversal {
private:
public:
    DepthFirstSearch();
    ~DepthFirstSearch();

    std::vector<int> execute(Graph graph, int start_node) override;
};