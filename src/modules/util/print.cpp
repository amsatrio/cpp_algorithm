#include "print.h"
#include <iostream>

void print_vector(std::vector<int> &input) {
    for (size_t i = 0; i < input.size(); i++) {
        std::cout << input[i] << " ";
    }
    std::cout << std::endl;
}