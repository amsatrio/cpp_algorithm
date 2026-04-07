#include "weighted.h"
#include <queue>

Weighted::Weighted() {}
Weighted::~Weighted() {}

Dijkstra::Dijkstra() {}
Dijkstra::~Dijkstra() {}
std::vector<int> Dijkstra::execute(Graph graph, int source) {
    std::priority_queue<std::pair<int, int>, std::vector<std::pair<int, int>>, std::greater<std::pair<int, int>>> pq;
    
    std::vector<int> dist(graph.V, __INT_MAX__);

    dist[source] = 0;
    pq.emplace(0, source);

    while(!pq.empty()) {
        std::pair<int, int> top = pq.top();
        pq.pop();

        int d = top.first;
        int u = top.second;

        if (d > dist[u]) continue;

        for (auto &edge : graph.adj[u]) {
            int v = edge.first;
            int w = edge.second;

            if (dist[u] + w < dist[v]) {
                dist[v] = dist[u] + w;
                pq.emplace(dist[v], v);
            }
        }
    }

    return dist;
}

BellmanFord::BellmanFord() {}
BellmanFord::~BellmanFord() {}