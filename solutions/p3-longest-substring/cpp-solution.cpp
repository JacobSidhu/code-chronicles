#include <iostream>
#include <string>
#include <unordered_set>

// Function to find the length of the longest substring without repeated characters.
unsigned int lengthOfLongestUnrepeatedString(const std::string& str) {
    if (str.empty()) return 0;  // Handle empty string

    std::unordered_set<char> charSet;
    unsigned int maxLength = 0;

    for (unsigned int i = 0; i < str.size(); ++i) {
        // If the character is already in the set, stop
        if (charSet.find(str[i]) != charSet.end()) {
            break;
        }

        // Add the character to the set
        charSet.insert(str[i]);

        // Update the maximum length
        maxLength++;
    }

    return maxLength;  // Return the maximum length of unique characters before repetition
}

int main() {
    const int kTestSize = 5;
    const std::string testingStrings[kTestSize] = {"abcdefgehc", "dvsrd", "", "ewiwhsggtve", "lkl"};
    const int testResults[kTestSize] = {7, 4, 0, 3, 2};

    // Verifying test results.
    for (int i = 0; i < kTestSize; i++) {
        unsigned int result = lengthOfLongestUnrepeatedString(testingStrings[i]);
        if (result == testResults[i]) {
            std::cout << "✓ Test " << (i + 1) << " Passed." << std::endl;
        } else {
            std::cout << "X Test " << (i + 1) << " Failed. Got: " << result
                      << ", Expected: " << testResults[i] << std::endl;
        }
    }

    return 0;
}

