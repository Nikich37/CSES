#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    string s;
    cin >> s;
    map<char, string> m;
    for (char c : s) {
        if (m.count(c)) {
            m[c] += c;
        }
        else {
            m[c] = c;
        }
    }

    string fir = "", last = "", odd = "";
    for (auto c : m) {
        if (c.second.length() % 2 == 1 && odd != "") {
            cout << "NO SOLUTION";
            return 0;
        }
        else if (c.second.length() % 2 == 1) {
            odd = c.second;
        }
        else {
            fir = c.second.substr(0, c.second.length() / 2) + fir;
            last += c.second.substr(0, c.second.length() / 2);
        }
    }
    cout << fir + odd + last;
}