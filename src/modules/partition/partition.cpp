#include "partition.h"

Partition::~Partition(){}

NaivePartition::~NaivePartition(){}
void NaivePartition::execute(std::vector<int> &input) {
    int n = input.size();

    std::vector<int> tmp(n);
    int tmp_index = 0;

    int pivot = input[n - 1];

    for (int i = 0; i <= n - 1; i++) {
        if (input[i] <= pivot) {
            tmp[tmp_index] = input[i];
            tmp_index++;
        }
    }

    for (int i = 0; i <= n - 1; i++) {
        if (input[i] > pivot) {
            tmp[tmp_index] = input[i];
            tmp_index++;
        }
    }

    input = tmp;
}