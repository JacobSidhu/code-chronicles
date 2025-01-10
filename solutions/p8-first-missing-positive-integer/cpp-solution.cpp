#include <iostream>
#include <vector>

// -- function to find first missing position Integer.
int firstMissingPositive(std::vector<int> nums) {
    int n = nums.size();
    for (int i = 0; i < n; ++i) {
        while (nums[i] > 0 && nums[i] <= n && nums[nums[i] - 1] != nums[i]) {
            std::swap(nums[nums[i] - 1], nums[i]);
        }
    }
    
    for (int i = 0; i < n; ++i) {
        if (nums[i] != i + 1) {
            return i + 1;
        }
    }
    return n + 1;
}


//----Main Execution Block----
int main(){

    // Structure to store testcases
    struct TestCase {
        std::vector<int> nums;
        int expectedOutput;
    };

    std::vector<TestCase> testCases = {
        {{1, 2, 0}, 3},
        {{3, 4, -1, 1}, 2},
        {{7, 8, 9, 11, 12}, 1},
        {{2, 3, 7, 6, 8, -1, -10, 15}, 1},
        {{1, 1, 0, -1, -2}, 2}
    };

    for (const auto& testCase : testCases) {
        int result = firstMissingPositive(testCase.nums);
        std::cout << "Input: ";
        for (int num : testCase.nums) {
            std::cout << num << " ";
        }
        std::cout << "\nOutput: " << result;
        std::cout << "\nTest " << (result == testCase.expectedOutput ? "Passed" : "Failed") << "\n\n";
    }

    return 0;
}
