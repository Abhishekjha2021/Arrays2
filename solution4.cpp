#include <iostream>
#include <vector>

int findDifference(const std::vector<int>& arr) {
    int n = arr.size();

    if (n < 2) {
        std::cerr << "Array should have at least two elements." << std::endl;
        return 0;
    }

    int sumEven = 0;
    int sumOdd = 0;

    for (int i = 0; i < n; ++i) {
        if (i % 2 == 0) {
            // Even index
            sumEven += arr[i];
        } else {
            // Odd index
            sumOdd += arr[i];
        }
    }

    return sumEven - sumOdd;
}

int main() {
    // Example array
    std::vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8, 9};

    int result = findDifference(arr);

    std::cout << "Difference between the sum of elements at even indices and odd indices: " << result << std::endl;

    return 0;
}
