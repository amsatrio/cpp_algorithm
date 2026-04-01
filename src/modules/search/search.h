#include <vector>

class Search {
private:
public:
    Search();
    ~Search();
    virtual int execute(std::vector<int> &input, int x) { return -1; };
};

class LinearSearch: public Search {
private:
public:
    LinearSearch();
    ~LinearSearch();
    int execute(std::vector<int> &input, int x) override;
};

class BinarySearch : public Search {
private:
public:
    BinarySearch();
    ~BinarySearch();
    int execute(std::vector<int> &input, int x) override;
};
