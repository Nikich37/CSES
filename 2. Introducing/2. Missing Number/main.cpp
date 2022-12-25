#include <iostream>

int main() {
    int n, answer;
    std::cin >> n;
    bool* nums = new bool[n + 1];
    for (int i = 0; i < n - 1; i++) {
        int temp;
        std::cin >> temp;
        nums[temp] = true;
    }
    for (int i = 1; i <= n; i++) {
        if (!nums[i]) answer = i;
    }
    std::cout << answer;
    return 0;
}