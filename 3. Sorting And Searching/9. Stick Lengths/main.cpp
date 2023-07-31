#include <iostream>
#include <vector>
#include <algorithm>


// не average, а median!!!
int main() {
    int n;
    std::cin >> n;
    std::vector<long long> sticks(n);
    for (int i = 0; i < n; ++i) {
        std::cin >> sticks[i];
    }
    std::sort(sticks.begin(), sticks.end());
    long long median = sticks[n / 2];
    long long ans = 0;
    for (int i = 0; i < n; ++i) {
        ans += abs(sticks[i] - median);
    }
    std::cout << ans;
}