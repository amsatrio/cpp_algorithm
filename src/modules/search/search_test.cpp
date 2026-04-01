#include "search.h"
#include "../util/print.h"
#include <vector>
#include <memory>
#include <assert.h>
#include <iostream>

int main(){
    std::unique_ptr<Search> search;
    std::vector<int> input = {2, 3, 4, 10, 40, 9, 90, 30};
    int x = 10;
    int expected = 3;
    int result;

    search = std::make_unique<LinearSearch>();
    result = search->execute(input, x);
    assert(result == expected);
    std::cout << "[PASS] linear search check " << std::endl;
    
    search = std::make_unique<BinarySearch>();
    result = search->execute(input, x);
    expected = 4;
    assert(result == expected);
    std::cout << "[PASS] binary search check " << std::endl;

    return 0;
}