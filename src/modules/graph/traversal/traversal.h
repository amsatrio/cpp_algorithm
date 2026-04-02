class Traversal {
private:
public:
    Traversal();
    ~Traversal();
};

class BreadthFirstSearch : public Traversal {
private:
public:
    BreadthFirstSearch();
    ~BreadthFirstSearch();
};

class DepthFirstSearch : public Traversal {
private:
public:
    DepthFirstSearch();
    ~DepthFirstSearch();
};