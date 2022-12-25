#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    for (int i = 0; i < t; i++) {
        long long x, y, answer;
        cin >> y >> x;
        if (x >= y) {
            if (!(x % 2)) {
                answer = (x - 1) * (x - 1) + y;
            }
            else {
                answer = x * x - y + 1;
            }
        }
        else {
            if (!(y % 2)) {
                answer = y * y - x + 1;
            }
            else {
                answer = (y - 1) * (y - 1) + x;
            }
        }
        cout << answer << "\n";
    }
    return 0;
}
