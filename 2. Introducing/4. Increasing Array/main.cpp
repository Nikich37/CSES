#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    long long prev, cur;
    long long mistake = 0;
    cin >> prev;
    for (int i = 0; i < n - 1; i++) {
        cin >> cur;
        if (cur < prev) {
            mistake += prev - cur;
            cur = prev;
        }
        else {
            prev = cur;
        }
    }
    cout << mistake;
}