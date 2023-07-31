#include <vector>
#include <iostream>
#include <algorithm>

int main() {
    int n;
    std::cin >> n;
    std::vector<int> nums(n);
    for (int i = 0; i < n; ++i) {
        std::cin >> nums[i];
    }
    std::sort(nums.begin(), nums.end());
    long long sum = 0;
    for (int i = 0; i < nums.size(); ++i) {
        if (sum + 1 < nums[i]) {
            break;
        }
        sum +=  nums[i];
    }
    std::cout << sum + 1;
}