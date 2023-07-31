#include <vector>
#include <algorithm>
#include <iostream>

int main() {
    int n, x;
    std::cin >> n >> x;
    std::vector<int> children(n);
    for (int i = 0; i < n; ++i) {
        std::cin >> children[i];
    }
    std::sort(children.begin(), children.end());
    // two pointers
    int p1 = 0, p2 = n - 1;
    int ans = 0;
    while (p1 <= p2) {
        if (children[p1] + children[p2] <= x) {
            p1++;
        }
        p2--;
        ans++;
    }
    std::cout << ans;
}