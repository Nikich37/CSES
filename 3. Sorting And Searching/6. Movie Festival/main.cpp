#include <vector>
#include <algorithm>
#include <iostream>

int main() {
    int n;
    std::cin >> n;
    std::vector<std::pair<int, int>> movies(n);
    for (int i = 0; i < n; ++i) {
        int start, end;
        std::cin >> start >> end;
        movies[i] = {start, end};
    }
    std::sort(movies.begin(), movies.end(), [](const auto& m1, const auto& m2) {
        return m1.second < m2.second;
    });
    int ans = 0;
    int maxTime = 0;
    for (int i = 0; i < n; ++i) {
        if (maxTime <= movies[i].first) {
            ans++;
            maxTime = movies[i].second;
        }
    }
    std::cout << ans;
}