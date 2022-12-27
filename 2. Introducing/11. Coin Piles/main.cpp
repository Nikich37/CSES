#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    for (int i = 0; i < t; i++) {
        int a, b;
        cin >> a >> b;
        if (a < b) swap(a, b);
        if (a > b * 2) {
            cout << "NO\n";
        }
        else {
            if ((a + b) % 3 == 0) {
                cout << "YES\n";
            }
            else {
                cout << "NO\n";
            }
        }
        
    }
}