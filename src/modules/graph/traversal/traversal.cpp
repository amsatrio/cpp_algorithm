#include "traversal.h"
#include <iostream>
#include <queue>

Traversal::Traversal() {}
Traversal::~Traversal() {}

BreadthFirstSearch::BreadthFirstSearch() {}
BreadthFirstSearch::~BreadthFirstSearch() {}

void BreadthFirstSearch::execute(Graph graph, int start_node) {
    // 1. Create a boolean vector to keep track of visited nodes
    std::vector<bool> visited(graph.V, false);
    
    // 2. Create a queue for BFS
    std::queue<int> q;

    // 3. Mark the starting node as visited and enqueue it
    visited[start_node] = true;
    q.push(start_node);

    std::cout << "BFS starting from node " << start_node << ": ";

    while (!q.empty()) {
        // 4. Dequeue a vertex and print it
        int current = q.front();
        std::cout << current << " ";
        q.pop();

        // 5. Get all adjacent vertices of the dequeued vertex
        // If an adjacent vertex has not been visited, mark it visited and enqueue it
        for (int neighbor : graph.adj[current]) {
            if (!visited[neighbor]) {
                visited[neighbor] = true;
                q.push(neighbor);
            }
        }
    }
    std::cout << std::endl;
}

DepthFirstSearch::DepthFirstSearch() {}
DepthFirstSearch::~DepthFirstSearch() {}

void DepthFirstSearch::execute(Graph graph, int start_node) {

}