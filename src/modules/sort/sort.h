#include <vector>
#include <cstddef>
#include <iostream>

class Sort {
private:
public:
    Sort();
    ~Sort();
    virtual std::vector<int> execute(std::vector<int> &input) = 0;
};

/** QUICK SORT */
class QuickSort : public Sort {
private:
public:
    QuickSort();
    ~QuickSort();
    std::vector<int> execute(std::vector<int> &input) override;
};

/** MERGE SORT */
class MergeSort : public Sort {
private:
public:
    MergeSort();
    ~MergeSort();
    std::vector<int> execute(std::vector<int> &input) override;
};
    
/** BUBBLE SORT */
class BubbleSort : public Sort {
private:
public:
    BubbleSort();
    ~BubbleSort();
    std::vector<int> execute(std::vector<int> &input) override;
};
    