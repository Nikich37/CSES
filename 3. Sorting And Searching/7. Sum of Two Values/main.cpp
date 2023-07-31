#include <map>
#include <iostream>
#include <vector>

int main() {
    int n, target;
    std::cin >> n >> target;
    std::multimap<int, int> s;
    for (int i = 0; i < n; ++i) {
        int num;
        std::cin >> num;
        s.insert({num, i});
    }
    for (const auto& p : s) {
        if (target - p.first == p.first && s.count(target - p.first) == 1) {
            continue;
        }
        if (s.count(target - p.first)) {
            if (target - p.first == p.first) {
                auto it = s.equal_range(p.first);
                std::cout << (*it.first).second + 1 << " ";
                it.first++;
                std::cout << (*it.first).second + 1;
                return 0;
            } else {
                std::cout << p.second + 1 << " " << (*s.find(target - p.first)).second + 1;
                return 0;
            }
        }
    }
    std::cout << "IMPOSSIBLE";

}