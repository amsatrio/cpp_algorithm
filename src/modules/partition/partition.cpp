#include "partition.h"

Partition::~Partition() {}

NaivePartition::~NaivePartition() {}
int NaivePartition::execute(std::vector<int> &input, int low, int high) {

    std::vector<int> tmp(high);

    int pivot = input[high - 1];

    for (int i = 0; i <= high - 1; i++) {
        if (input[i] <= pivot) {
            tmp[low] = input[i];
            low++;
        }
    }

    int pivotIndex = low - 1;

    for (int i = 0; i <= high - 1; i++) {
        if (input[i] > pivot) {
            tmp[low] = input[i];
            low++;
        }
    }

    input = tmp;

    return pivotIndex;
}

LomutoPartition::~LomutoPartition() {}
int LomutoPartition::execute(std::vector<int> &input, int low, int high) {

    int i = low - 1;

    int pivot = input[high - 1];

    for (int j = 0; j < high; j++) {
        if (input[j] < pivot) {
            i++;

            int tmp = input[i];
            input[i] = input[j];
            input[j] = std::move(tmp);
        }
    }

    i++;
    int tmp = input[i];
    input[i] = input[high - 1];
    input[high - 1] = std::move(tmp);

    return i;
}


HoaresPartition::~HoaresPartition() {}
int HoaresPartition::execute(std::vector<int> &input, int low, int high) {

    return 0;
}