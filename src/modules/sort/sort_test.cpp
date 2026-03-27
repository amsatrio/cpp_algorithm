#include "sort.h"
#include <memory>
#include <assert.h>

int main(){
    std::vector<int> vec = {2, 2, 5 ,1, 6, 3, 7, 0, 9};
    std::vector<int> sorted = {0, 1, 2, 2, 3, 5, 6, 7, 9};
    
    std::unique_ptr<Sort> sort = std::make_unique<BubbleSort>();
    sort->execute(vec);
    assert(vec == sorted);
    std::cout << "[PASS] buble sort check" << std::endl;


}