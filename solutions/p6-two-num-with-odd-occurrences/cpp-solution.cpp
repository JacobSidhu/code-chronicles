#include <iostream>
#include <unordered_map>
#include <array>

std::array<int, 2> twoNumbersWithOddOccurrences(const std::array<int, 10>& arr) {
    try {
        const int kResultArraySize = 2;

        // Validatating input
        if (arr.empty()) {
            throw std::invalid_argument("\nInvalid Input Error: Array cannot be empty!\n");
        }

        // Counting the occurrences of each number
        std::unordered_map<int, int> occurrence;
        for (const auto& it : arr) {
            ++occurrence[it];
        }

        // Storing numbers with odd occurrences
        std::array<int, kResultArraySize> result = {};
        int indx = 0;
        for (const auto& pair : occurrence) {
            if (pair.second % 2 != 0) {
                if (indx >= kResultArraySize) {
                    throw std::invalid_argument("\nError: More than two numbers have odd occurrences!\n");
                }
                result[indx++] = pair.first;
            }
        }

        // Ensuring exactly two numbers with odd occurrences were found
        if (indx != kResultArraySize) {
            throw std::invalid_argument("\nError: Less than two numbers have odd occurrences!\n");
        }

        return result;

    } catch (const std::exception& e) {
        std::cerr << e.what() << '\n';
        return {0, 0}; // Returning default array in case of an error
    }
}

int main() {
    const int kArraySize = 10;
    std::array<int, kArraySize> array {4, 7, 2, 7, 4, 4, 5, 2, 5, 9};

    std::array<int, 2> result = twoNumbersWithOddOccurrences(array);

    std::cout << "Numbers with odd occurrences: ";
    for (auto it : result) {
        std::cout << it << " ";
    }
    std::cout << std::endl;

    return 0;
}