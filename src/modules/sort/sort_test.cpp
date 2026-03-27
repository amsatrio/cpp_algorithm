#include "../util/print.h"
#include "sort.h"
#include <assert.h>
#include <memory>

int main() {
    std::vector<int> input = {2, 2, 5, 1, 6, 3, 7, 0, 9};
    std::vector<int> expected = {0, 1, 2, 2, 3, 5, 6, 7, 9};

    std::unique_ptr<Sort> sort = std::make_unique<BubbleSort>();
    sort->execute(input);
    assert(input == expected);
    print_vector(input);
    std::cout << "[PASS] buble sort check" << std::endl;

    return 0;
}