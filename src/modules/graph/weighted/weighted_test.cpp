#include "../../util/print.h"
#include "weighted.h"
#include <memory>

int main() {
    Graph graph(5);
    graph.add_edge(0, 1, 10);
    graph.add_edge(0, 2, 5);
    graph.add_edge(1, 3, 20);
    graph.add_edge(1, 4, 15);
    graph.add_edge(2, 4, 10);
    graph.print_edges();

    std::unique_ptr<Weighted> weighted = std::make_unique<Dijkstra>();
    std::vector<int> result = weighted->execute(graph, 0);
    print_vector(result);
    return 0;
}