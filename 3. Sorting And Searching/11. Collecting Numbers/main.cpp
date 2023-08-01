#include <iostream>
#include <vector>
 
int main() {
    int n;
    std::cin >> n;
    std::vector<int> nums(n);
    std::vector<int> pos(n + 1);
    pos[0] = 0;
    for (int i = 0; i < n; ++i) {
        std::cin >> nums[i];
        pos[nums[i]] = i;
    }
    int ans = 1;
    for (int i = 0; i < n; ++i) {
        if (pos[nums[i]] < pos[nums[i] - 1]) {
            ans++;
        }
    }
    std::cout << ans;
}