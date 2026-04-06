#include "traversal.h"
#include "../../util/print.h"
#include <memory>
#include <assert.h>
#include <iostream>

int main() {

    std::vector<int> expected;
    std::vector<int> result;
    Graph graph(5);
    graph.add_edge(0, 1);
    graph.add_edge(0, 2);
    graph.add_edge(1, 3);
    graph.add_edge(1, 4);
    graph.add_edge(2, 4);
    graph.print_edges();

    std::unique_ptr<Traversal> traversal;

    traversal = std::make_unique<BreadthFirstSearch>();
    result = traversal->execute(graph, 0);
    expected = {0, 1, 2, 3, 4};
    print_vector(result);
    assert(result == expected);
    std::cout << "[PASS] breadth first search check " << std::endl;

    traversal = std::make_unique<DepthFirstSearch>();
    result = traversal->execute(graph, 0);
    expected = {0, 1, 3, 4, 2};
    print_vector(result);
    assert(result == expected);
    std::cout << "[PASS] depth first search check " << std::endl;

    return 0;
}