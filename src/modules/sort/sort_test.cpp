#include "../util/print.h"
#include "sort.h"
#include <assert.h>
#include <memory>
#include <chrono>

int main() {
    std::vector<int> input;
    std::vector<int> expected = {0, 1, 2, 2, 3, 5, 6, 7, 9};

    std::unique_ptr<Sort> sort;

    auto start = std::chrono::high_resolution_clock::now();
    sort = std::make_unique<BubbleSort>();
    input = {2, 2, 5, 1, 6, 3, 7, 0, 9};
    sort->execute(input);
    assert(input == expected);
    print_vector(input);
    auto stop = std::chrono::high_resolution_clock::now();
    auto duration = duration_cast<std::chrono::microseconds>(stop - start);
    std::cout << "[PASS] buble sort check " << duration.count() << "us" << std::endl;

    start = std::chrono::high_resolution_clock::now();
    sort = std::make_unique<QuickSort>();
    input = {2, 2, 5, 1, 6, 3, 7, 0, 9};
    sort->execute(input);
    assert(input == expected);
    print_vector(input);
    stop = std::chrono::high_resolution_clock::now();
    duration = duration_cast<std::chrono::microseconds>(stop - start);
    std::cout << "[PASS] quick sort check " << duration.count() << "us" << std::endl;

    return 0;
}