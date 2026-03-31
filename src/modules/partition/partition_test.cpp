#include "partition.h"
#include "../util/print.h"
#include <cassert>
#include <iostream>
#include <memory>
#include <vector>

int main(){
    std::vector<int> input;
    std::vector<int> expected;
    int pivot_index;
    std::unique_ptr<Partition> partition;
    
    input = {5, 13, 6, 9, 12, 11, 8};
    expected = {5, 6, 8, 13, 9, 12, 11};

    partition = std::make_unique<NaivePartition>();
    print_vector(input);
    pivot_index = partition->execute(input, 0, input.size() - 1);
    print_vector(input);
    assert(input == expected);
    assert(pivot_index == 2);
    std::cout << "[PASS] naive partition check" << std::endl;


    input = {5, 13, 6, 9, 12, 11, 8};
    expected = {5, 6, 8, 9, 12, 11, 13};
    
    partition = std::make_unique<LomutoPartition>();
    print_vector(input);
    pivot_index = partition->execute(input, 0, input.size() - 1);
    print_vector(input);
    assert(input == expected);
    assert(pivot_index == 2);
    std::cout << "[PASS] lomuto partition check" << std::endl;


    input = {5, 13, 6, 9, 12, 11, 8};
    expected = {5, 6, 8, 9, 12, 11, 13};
    
    partition = std::make_unique<HoaresPartition>();
    print_vector(input);
    pivot_index = partition->execute(input, 0, input.size() - 1);
    print_vector(input);
    assert(input == expected);
    assert(pivot_index == 2);
    std::cout << "[PASS] hoare's partition check" << std::endl;

    return 0;
}