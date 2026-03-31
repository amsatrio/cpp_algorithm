#include "partition.h"
#include "../util/print.h"
#include <iostream>

Partition::~Partition() {}

NaivePartition::~NaivePartition() {}
int NaivePartition::execute(std::vector<int> &input, int low, int high) {

    std::vector<int> tmp;

    int pivot = input[high];

    // insert value lower than pivot
    for (int i = low; i <= high; i++) {
        if (input[i] <= pivot) {
            tmp.push_back(input[i]);
        }
    }

    int pivot_index = tmp.size() - 1;

    // insert value higher than pivot
    for (int i = low; i <= high; i++) {
        if (input[i] > pivot) {
            tmp.push_back(input[i]);
        }
    }

    // copy new value to existing vector
    for (int i = 0; i < tmp.size(); i++) {
        input[low + i] = tmp[i];
    }

    return pivot_index;
}

LomutoPartition::~LomutoPartition() {}
int LomutoPartition::execute(std::vector<int> &input, int low, int high) {

    int i = low - 1;

    int pivot = input[high];

    for (int j = low; j <= high; j++) {

        // swap if value less than pivot
        if (input[j] < pivot) {
            i++;

            int tmp = input[i];
            input[i] = input[j];
            input[j] = std::move(tmp);
        }
    }

    // swap pivot
    i++;
    input[high] = input[i];
    input[i] = std::move(pivot);

    return i;
}

HoaresPartition::~HoaresPartition() {}
int HoaresPartition::execute(std::vector<int> &input, int low, int high) {

    int i = low - 1;
    int j = high + 1;
    int pivot = input[low];

    while (true) {
        do {
            i++;
        } while (input[i] < pivot);

        do {
            j--;
        } while (input[j] > pivot);

        if (i > j) break;

        int tmp = input[i];
        input[i] = input[j];
        input[j] = std::move(tmp);
    }
    return low;
}