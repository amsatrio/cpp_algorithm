#include "traversal.h"
#include <iostream>
#include <queue>

Traversal::Traversal() {}
Traversal::~Traversal() {}

BreadthFirstSearch::BreadthFirstSearch() {}
BreadthFirstSearch::~BreadthFirstSearch() {}

std::vector<int> BreadthFirstSearch::execute(Graph graph, int start_node) {
    std::vector<bool> visited(graph.V, false);
    std::queue<int> q;
    std::vector<int> result;

    visited[start_node] = true;
    q.push(start_node);

    while(!q.empty()) {
        // visit source
        int current = q.front();
        q.pop();
        result.push_back(current);

        // visit all unvisited neighbours
        for (int i : graph.adj[current]) {
            if (!visited[i]) {
                visited[i] = true;
                q.push(i);
            }
        }
    }

    return result;
}

DepthFirstSearch::DepthFirstSearch() {}
DepthFirstSearch::~DepthFirstSearch() {}
void depth_first_search_recrusive(Graph graph, std::vector<bool> &visited, int start_node, std::vector<int> &result) {

    // visit source and mark visited
    visited[start_node] = true;
    result.push_back(start_node);

    for (int i : graph.adj[start_node]) {
        if (!visited[i]) {
            depth_first_search_recrusive(graph, visited, i, result);
        }
    }
}
std::vector<int> DepthFirstSearch::execute(Graph graph, int start_node) {
    std::vector<bool> visited(graph.V, false);
    std::vector<int> result;

    depth_first_search_recrusive(graph, visited, start_node, result);

    return result;
}