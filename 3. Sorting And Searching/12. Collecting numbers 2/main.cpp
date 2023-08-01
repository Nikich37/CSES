#include <iostream>
#include <vector>

int main() {
    int n, m;
    std::cin >> n >> m;
    std::vector<int> nums(n);
    std::vector<int> pos(n + 2);
    std::vector<std::pair<int, int>> operations(m);
    pos[0] = -1;
    pos[n + 1] = n;
    for (int i = 0; i < n; ++i) {
        std::cin >> nums[i];
        pos[nums[i]] = i;
    }
    for (int i = 0; i < m; ++i) {
        int left, right;
        std::cin >> left >> right;
        operations[i] = {left, right};
    }
    int ans = 1;
    for (int i = 0; i < n; ++i) {
        if (pos[nums[i]] < pos[nums[i] - 1]) {
            ans++;  
        }
    }
    for (int i = 0; i < m; ++i) {

        int x = operations[i].first - 1;
        int y = operations[i].second - 1;
        int l = nums[x], r = nums[y];
        std::swap(nums[x], nums[y]);
        if (pos[l - 1] <= pos[l] && pos[l - 1] > y) ans++;
        if (pos[l - 1] > pos[l] && pos[l - 1] <= y) ans--;
        if (pos[l] <= pos[l + 1] && y > pos[l + 1]) ans++;
        if (pos[l] > pos[l + 1] && y <= pos[l + 1]) ans--;
        pos[l] = y;
        if (pos[r - 1] <= pos[r] && pos[r - 1] > x) ans++;
        if (pos[r - 1] > pos[r] && pos[r - 1] <= x) ans--;
        if (pos[r] <= pos[r + 1] && x > pos[r + 1]) ans++;
        if (pos[r] > pos[r + 1] && x <= pos[r + 1]) ans--;
        pos[r] = x;
        std::cout << ans << "\n";
    }
}