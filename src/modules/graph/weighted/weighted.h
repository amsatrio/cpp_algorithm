#include <vector>
#include "../graph.h"

class Weighted {
private:
public:
    Weighted();
    ~Weighted();
    virtual std::vector<int> execute(Graph graph, int source) { return std::vector<int>(); };
};

class Dijkstra : public Weighted {
private:
public:
    Dijkstra();
    ~Dijkstra();
    std::vector<int> execute(Graph graph, int source);
};

class BellmanFord : public Weighted {
private:
public:
    BellmanFord();
    ~BellmanFord();
};
