#include <vector>

class Search {
private:
public:
    Search();
    ~Search();
    virtual int execute(std::vector<int> &input, int x) { return -1; };
};
Search::Search() {}
Search::~Search() {}

class LinearSearch: public Search {
private:
public:
    LinearSearch();
    ~LinearSearch();
    int execute(std::vector<int> &input, int x) override;
};
LinearSearch::LinearSearch(){}
LinearSearch::~LinearSearch(){}

class BinarySearch : public Search {
private:
public:
    BinarySearch();
    ~BinarySearch();
    int execute(std::vector<int> &input, int x) override;
};
BinarySearch::BinarySearch(){}
BinarySearch::~BinarySearch(){}


