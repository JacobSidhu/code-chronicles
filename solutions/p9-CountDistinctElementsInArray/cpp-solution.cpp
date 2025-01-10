#include <iostream>
#include <vector>
#include <unordered_set>

int main() {
    int n;
    std::cin >> n;
    std::vector<int> arr(n);

    for (int i = 0; i < n; i++) {
        std::cin >> arr[i];
    }

   std:: unordered_set<int> distinctElements(arr.begin(), arr.end());

    std::cout << distinctElements.size() << std::endl;

    return 0;
}
