#include <bits/stdc++.h>
using namespace std;

long long n, t, min_all = INT_MAX, min_local = 0;
vector<long long> a, x;

void test() {
    long long px = 0;
    min_local = 0;
    for (int i = 0; i < n; ++i) {
        if (px < x.size() && x[px] == i) {
            min_local += a[i];
            px++;
        }
        else {
            min_local -= a[i];
        }
    }
    min_all = min(abs(min_local), min_all);
}
void solve(long long i) {
    if (i == n) {
        test();
        return;
    }
    solve(i + 1);
    x.push_back(i);
    solve(i + 1);
    x.pop_back();
}
int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        long long temp;
        cin >> temp;
        a.push_back(temp);
    }
    solve(0);
    cout << min_all;
}