#include "sort.h"
#include <cstddef>

Sort::Sort(){}
Sort::~Sort(){}
void Sort::print(std::vector<int> &input){
    for (size_t i = 0; i < input.size(); i++) {
        std::cout << input[i] << " ";
    }
    std::cout << std::endl;
};

QuickSort::QuickSort(){}
QuickSort::~QuickSort(){}
std::vector<int> QuickSort::execute(std::vector<int> &input) {
    return std::vector<int>();
}

MergeSort::MergeSort(){}
MergeSort::~MergeSort(){}
std::vector<int> MergeSort::execute(std::vector<int> &input) {
    return std::vector<int>();
}

BubbleSort::BubbleSort(){}
BubbleSort::~BubbleSort(){}
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