#include <iostream>

int main() {
    long long sum = 0;
    int n;
    std::cin >> n;
    long long ans;
    std::cin >> ans;
    sum = ans;
    for (int i = 0; i < n - 1; ++i) {
        long long num;
        std::cin >> num;
        if (sum < 0) sum = 0;
        sum += num;
        ans = std::max(ans, sum);
    }
    std::cout << ans;
}