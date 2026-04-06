#include "graph.h"
#include <iostream>

Graph::Graph(int V){
    this->V = V;
    adj.resize(V);
}
Graph::~Graph() {}

// stores the connections that actually exist
void Graph::add_edge(int u, int v, int w) {
    adj[u].push_back({v, w});
    adj[v].push_back({u, w});
};

void Graph::print_edges() {
    for (int i = 0; i < adj.size(); i++) {
        for (int j = 0; j < adj[i].size(); j++) {
            std::cout << adj[i][j].first << " ";
        }
        std::cout << std::endl;
    }
}