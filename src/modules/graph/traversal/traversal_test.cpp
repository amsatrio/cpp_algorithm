#include "traversal.h"

#include <memory>
int main() {

    Graph graph(5);
    graph.add_edge(0, 1);
    graph.add_edge(0, 2);
    graph.add_edge(1, 3);
    graph.add_edge(1, 4);
    graph.add_edge(2, 4);
    graph.print_edges();

    std::unique_ptr<Traversal> traversal;

    traversal = std::make_unique<BreadthFirstSearch>();
    traversal->execute(graph, 0);

    return 0;
}