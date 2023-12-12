#include <iostream>
#include <vector>

int findUniqueNumber(const std::vector<int>& arr) {
    int uniqueNumber = 0;

    for (int num : arr) {
        uniqueNumber ^= num;
    }

    return uniqueNumber;
}

int main() {
    // Example array with one unique number
    std::vector<int> arr = {2, 4, 6, 8, 10, 2, 4, 6, 8};

    int result = findUniqueNumber(arr);

    std::cout << "The unique number in the array is: " << result << std::endl;

    return 0;
}
