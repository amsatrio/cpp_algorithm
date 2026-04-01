#include "search.h"
#include "../sort/sort.h"
#include <memory>

Search::Search() {}
Search::~Search() {}

LinearSearch::LinearSearch(){}
LinearSearch::~LinearSearch(){}
int LinearSearch::execute(std::vector<int> &input, int x) {
    for (int i = 0; i < input.size(); i++) {
        if (input[i] == x) return i;
    }
    
    return -1;
}

BinarySearch::BinarySearch(){}
BinarySearch::~BinarySearch(){}
int BinarySearch::execute(std::vector<int> &input, int x) {
    std::unique_ptr<Sort> sort = std::make_unique<QuickSort>();
    sort->execute(input);

    int low = 0;
    int high = input.size() - 1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (input[mid] == x) return mid;

        if (input[mid] < x) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    
    return -1;
}