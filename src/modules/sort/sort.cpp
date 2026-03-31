#include "sort.h"
#include "../util/print.h"

Sort::Sort() {}
Sort::~Sort() {}

QuickSort::QuickSort() {}
QuickSort::~QuickSort() {}
void recrusive_lomuto(std::vector<int> &input, int low, int high,
                      std::unique_ptr<Partition> &partition) {
    if (low >= high)
        return;

    int pivot_index = partition->execute(input, low, high);

    recrusive_lomuto(input, low, pivot_index - 1, partition);
    recrusive_lomuto(input, pivot_index + 1, high, partition);
}
void recrusive_naive(std::vector<int> &input, int low, int high,
                     std::unique_ptr<Partition> &partition) {

    if (low >= high)
        return;

    int pivot_index = partition->execute(input, low, high);
    int absolute_pivot = low + pivot_index;

    recrusive_naive(input, low, absolute_pivot - 1, partition);
    recrusive_naive(input, absolute_pivot + 1, high, partition);
}
std::vector<int> QuickSort::execute(std::vector<int> &input) {
    // std::unique_ptr<Partition> partition = std::make_unique<LomutoPartition>(); 
    // recrusive_lomuto(input, 0, input.size() - 1, partition);

    std::unique_ptr<Partition> partition = std::make_unique<NaivePartition>();
    recrusive_naive(input, 0, input.size() - 1, partition);

    return input;
}

MergeSort::MergeSort() {}
MergeSort::~MergeSort() {}
std::vector<int> MergeSort::execute(std::vector<int> &input) {
    return std::vector<int>();
}

BubbleSort::BubbleSort() {}
BubbleSort::~BubbleSort() {}
std::vector<int> BubbleSort::execute(std::vector<int> &input) {
    for (size_t i = 0; i < input.size(); i++) {
        for (size_t j = i + 1; j < input.size() - 1; j++) {
            if (input[i] > input[j]) {
                int tmp = input[i];
                input[i] = input[j];
                input[j] = std::move(tmp);
            }
        }
    }

    return input;
}