#include "sort.h"
#include <memory>

int main(){
    std::vector<int> vec = {2, 2, 5 ,1, 6, 3, 7, 0, 9};
    std::unique_ptr<Sort> sort = std::make_unique<BubbleSort>();
    sort->execute(vec);
    sort->print(vec);
}