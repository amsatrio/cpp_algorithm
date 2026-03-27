#include <vector>

class Sort {
private:
public:
    Sort();
    ~Sort();
    virtual std::vector<int> execute(std::vector<int> &input){};
};
Sort::Sort(){}
Sort::~Sort(){}

/** QUICK SORT */
class QuickSort : public Sort {
private:
public:
    QuickSort();
    ~QuickSort();
    std::vector<int> execute(std::vector<int> &input) override;
};
QuickSort::QuickSort(){}
QuickSort::~QuickSort(){}

/** MERGE SORT */
class MergeSort : public Sort {
private:
public:
    MergeSort();
    ~MergeSort();
    std::vector<int> execute(std::vector<int> &input) override;
};
MergeSort::MergeSort(){}
MergeSort::~MergeSort(){}

    
/** BUBBLE SORT */
class BubbleSort : public Sort {
private:
public:
    BubbleSort();
    ~BubbleSort();
    std::vector<int> execute(std::vector<int> &input) override;
};
BubbleSort::BubbleSort(){}
BubbleSort::~BubbleSort(){}
    