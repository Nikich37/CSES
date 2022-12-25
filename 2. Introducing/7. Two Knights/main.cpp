#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    cout << 0 << "\n";
    for (long long i = 2; i <= n; i++) {
        cout << i * i * (i * i - 1) / 2 - 4 * (i - 1) * (i - 2) << "\n";
    }
    return 0;
}