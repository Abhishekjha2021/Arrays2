#include <iostream>
#include <vector>

int countElementsGreaterThanX(const std::vector<int>& arr, int x) {
    int count = 0;

    for (int element : arr) {
        if (element > x) {
            count++;
        }
    }

    return count;
}

int main() {
    // Example array
    std::vector<int> arr = {2, 5, 8, 10, 3, 7};
    int x = 5;

    int result = countElementsGreaterThanX(arr, x);

    std::cout << "Number of elements strictly greater than " << x << ": " << result << std::endl;

    return 0;
}
