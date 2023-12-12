#include <iostream>
#include <vector>

bool isSorted(const std::vector<int>& arr) {
    int n = arr.size();

    for (int i = 0; i < n - 1; ++i) {
        if (arr[i] > arr[i + 1]) {
            return false; // Array is not sorted
        }
    }

    return true; // Array is sorted
}

int main() {
    // Example sorted array
    std::vector<int> sortedArr = {1, 2, 3, 5, 7, 8, 10};

    if (isSorted(sortedArr)) {
        std::cout << "The array is sorted." << std::endl;
    } else {
        std::cout << "The array is not sorted." << std::endl;
    }

    // Example unsorted array
    std::vector<int> unsortedArr = {7, 2, 9, 4, 1, 6, 8, 3, 5};

    if (isSorted(unsortedArr)) {
        std::cout << "The array is sorted." << std::endl;
    } else {
        std::cout << "The array is not sorted." << std::endl;
    }

    return 0;
}
