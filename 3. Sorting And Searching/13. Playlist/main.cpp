#include <iostream>
#include <set>
#include <vector>

// key idea: sliding window
int main() {
    int n;
    std::cin >> n;
    int l = 0, r = -1, ans = 0;
    std::set<int> s;
    std::vector<int> id(n);
    for (int i = 0; i < n; ++i) {
        std::cin >> id[i];
        r++;
        while(s.count(id[i])) {
            s.erase(id[l]);
            ++l;
        }
        s.insert(id[i]);
        ans = std::max(ans, r - l + 1);
    }
    std::cout << ans;
}