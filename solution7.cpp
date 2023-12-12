#include <iostream>
#include <vector>

bool isPalindrome(const std::vector<int>& arr) {
    int n = arr.size();

    for (int i = 0; i < n / 2; ++i) {
        if (arr[i] != arr[n - 1 - i]) {
            return false; // Not a palindrome
        }
    }

    return true; // Palindrome
}

int main() {
    // Example palindrome array
    std::vector<int> palindromeArr = {1, 2, 3, 4, 3, 2, 1};

    if (isPalindrome(palindromeArr)) {
        std::cout << "The array is a palindrome." << std::endl;
    } else {
        std::cout << "The array is not a palindrome." << std::endl;
    }

    // Example non-palindrome array
    std::vector<int> nonPalindromeArr = {1, 2, 3, 4, 5, 6, 7};

    if (isPalindrome(nonPalindromeArr)) {
        std::cout << "The array is a palindrome." << std::endl;
    } else {
        std::cout << "The array is not a palindrome." << std::endl;
    }

    return 0;
}
