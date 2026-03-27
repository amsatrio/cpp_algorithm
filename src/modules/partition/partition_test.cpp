#include "partition.h"
#include "../util/print.h"
#include <cassert>
#include <iostream>
#include <memory>
#include <vector>

int main(){
    std::vector<int> input = {5, 13, 6, 9, 12, 11, 8};
    std::vector<int> expected = {5, 6, 8, 13, 9, 12, 11};
    
    std::unique_ptr<Partition> partition = std::make_unique<NaivePartition>();
    partition->execute(input);
    print_vector(input);
    assert(input == expected);
    std::cout << "[PASS] buble sort check" << std::endl;
    return 0;
}