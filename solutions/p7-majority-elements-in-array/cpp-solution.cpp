#include <iostream>
#include <vector>
#include <unordered_map>
#include <stdexcept>

// Function to find the majority element using Boyer-Moore Voting Algorithm
int findMajorityElement(const std::vector<int>& nums) {
    int candidate = -1, count = 0;

    // Step 1: Find the candidate for majority
    for (const int& num : nums) {
        if (count == 0) {
            candidate = num;
        }
        count += (num == candidate) ? 1 : -1;
    }

    // Step 2: Verify if the candidate is a majority element
    count = 0;
    for (const int& num : nums) {
        if (num == candidate) {
            count++;
        }
    }

    if (count > nums.size() / 2) {
        return candidate;
    } else {
        throw std::invalid_argument("No majority element found.");
    }
}

// Main function
int main() {
    try {
        std::vector<int> nums = {3, 3, 4, 2, 3, 3, 3};
        std::cout << "Majority Element: " << findMajorityElement(nums) << std::endl;
    } catch (const std::exception& e) {
        std::cout << e.what() << std::endl;
    }
    return 0;
}
