#include <iostream>
#include <vector>

void modifyArray(std::vector<int>& arr) {
    int n = arr.size();

    for (int i = 0; i < n; ++i) {
        if (i % 2 == 0) {
            // Even index
            arr[i] += 10;
        } else {
            // Odd index
            arr[i] *= 2;
        }
    }
}

int main() {
    // Example array
    std::vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8, 9};

    std::cout << "Original array: ";
    for (int num : arr) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    // Modify the array
    modifyArray(arr);

    std::cout << "Modified array: ";
    for (int num : arr) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}
