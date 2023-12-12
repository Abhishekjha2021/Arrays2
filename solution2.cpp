#include <iostream>
#include<climits>
#include <vector>

void findLargestThree(const std::vector<int>& arr) {
    int n = arr.size();

    if (n < 3) {
        std::cerr << "Array should have at least three elements." << std::endl;
        return;
    }

    int firstLargest = arr[0];
    int secondLargest = INT_MIN;
    int thirdLargest = INT_MIN;

    for (int i = 1; i < n; ++i) {
        if (arr[i] > firstLargest) {
            thirdLargest = secondLargest;
            secondLargest = firstLargest;
            firstLargest = arr[i];
        } else if (arr[i] > secondLargest) {
            thirdLargest = secondLargest;
            secondLargest = arr[i];
        } else if (arr[i] > thirdLargest) {
            thirdLargest = arr[i];
        }
    }

    std::cout << "The three largest elements are: " << firstLargest << ", " << secondLargest << ", " << thirdLargest << std::endl;
}

int main() {
    // Example array
    std::vector<int> arr = {7, 2, 9, 4, 1, 6, 8, 3, 5};

    findLargestThree(arr);

    return 0;
}
