#include <vector>
#include <iostream>
#include <algorithm>

int main() {
    int n, m, k;
    std::cin >> n >> m >> k;
    std::vector<int> apparts(n);
    std::vector<int> applicants(m);
    for (int i = 0; i < n; ++i) {
        std::cin >> apparts[i];
    }
    for (int i = 0; i < m; ++i) {
        std::cin >> applicants[i];
    }
    std::sort(apparts.begin(), apparts.end());
    std::sort(applicants.begin(), applicants.end());
    int p1 = 0, p2 = 0, ans = 0;
    while(p1 != apparts.size() && p2 != applicants.size()) {
        if (applicants[p2] >= apparts[p1] - k && apparts[p1] + k >= applicants[p2]) {
            ans++;
            p1++;
            p2++;
        } else if (apparts[p1] - k < applicants[p2]) {
            p1++;
        } else {
            p2++;
        }
    }
    std::cout << ans;
}