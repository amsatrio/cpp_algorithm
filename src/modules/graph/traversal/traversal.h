#include "../graph.h"

class Traversal {
private:
public:
    Traversal();
    ~Traversal();
    virtual void execute(Graph graph, int start_node) {};
};

class BreadthFirstSearch : public Traversal {
private:
public:
    BreadthFirstSearch();
    ~BreadthFirstSearch();

    void execute(Graph graph, int start_node) override;
};

class DepthFirstSearch : public Traversal {
private:
public:
    DepthFirstSearch();
    ~DepthFirstSearch();

    void execute(Graph graph, int start_node) override;
};