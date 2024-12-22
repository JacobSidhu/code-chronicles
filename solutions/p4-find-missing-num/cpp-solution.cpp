#include <iostream>
#include <vector>
#include <numeric> // For std::accumulate

int findMissingNumber(const std::vector<int>& arr) {
    int n = arr.size(); // Range of the array
    int expectedSum = n * (n + 1) / 2; // Sum from 0 to n
    int actualSum = std::accumulate(arr.begin(), arr.end(), 0); // Sum of array elements
    return expectedSum - actualSum;
}

int main() {
    std::vector<int> arr = {0, 1, 3, 4, 5, 6, 7, 8}; // Example array
    std::cout << "Missing number is: " << findMissingNumber(arr) << std::endl;
    return 0;
}