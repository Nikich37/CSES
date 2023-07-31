#include <vector>
#include <iostream>
#include <algorithm>

int main() {
    int n;
    std::cin >> n;
    std::vector<std::pair<int, int>> customers(n);
    for (int i = 0; i < n; ++i) {
        int start, end;
        std::cin >> start >> end;
        customers.push_back({start, 1});
        customers.push_back({end, -1});
    }
    std::sort(customers.begin(), customers.end());
    int curr = 0;
    int ans = 0;
    for (int i = 0; i < customers.size(); ++i) {
        curr += customers[i].second;
        ans = std::max(ans, curr);
    }
    std::cout << ans;
}