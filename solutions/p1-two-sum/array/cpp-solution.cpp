#include <iostream>
#include <array>
#include <string>

// Function to find the indices of two numbers that add up to the target
std::string twoSum(const std::array<int, 4>& arr, int target) {
    // Validate input
    if (target <= 1) {
        return "Error: Target value is too small to find a match.";
    }

    // Iterate through the array to find a valid pair
    for (std::size_t i = 0; i < arr.size() - 1; ++i) {
        for (std::size_t j = i + 1; j < arr.size(); ++j) {
            if (arr[i] + arr[j] == target) {
                return "[ " + std::to_string(i) + ", " + std::to_string(j) + " ]";
            }
        }
    }

    // Return message if no combination is found
    return "[]: No combination found!";
}

int main() {
    // Input array and target value
    const std::array<int, 4> sampleArray = {2, 7, 11, 15}; 
    int target = 18;

    // Display the result
    std::cout << "Input Array: { ";
    for (const auto& num : sampleArray) {
        std::cout << num << " ";
    }
    std::cout << "}\n";
    std::cout << "Target: " << target << "\n";

    std::string result = twoSum(sampleArray, target);
    std::cout << "Result: " << result << "\n";

    return 0;
}
