#include <iostream>
#include <vector>

int singleNumber(const std::vector<int>& nums) {
    int result = 0;
    for (int num : nums) { result ^= num; } return result;
}

int main() {
    std::vector<int> nums = {4, 1, 2, 1, 2};
    std::cout << "The single number is: " << singleNumber(nums) << std::endl;
    return 0;
}
