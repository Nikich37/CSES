#include <iostream>
#include <set>
#include <algorithm>


int main() {
    std::ios::sync_with_stdio(0);
    std::cin.tie(0);
    int n, m;
    std::cin >> n >> m;
    std::multiset<int> tickets;
    for (int i = 0; i < n; ++i) {
        int price;
        std::cin >> price;
        tickets.insert(price);
    }
    for (int i = 0; i < m; ++i) {
        long long price;
        std::cin >> price;
        auto it = tickets.upper_bound(price);
        if (it == tickets.begin()) {
            std::cout << -1 << "\n";
        } else {
            --it;
            std::cout << *it << "\n";
            tickets.erase(it);
        }
    }
}