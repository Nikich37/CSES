#include <unordered_set>
#include <iostream>

int main() {
    int n;
    std::cin >> n;
    std::unordered_set<int> s;
    s.reserve(n + 1);
    for (int i = 0; i < n; ++i) {
        int num;
        std::cin >> num;
        s.insert(num);
    }
    std::cout << s.size();
}