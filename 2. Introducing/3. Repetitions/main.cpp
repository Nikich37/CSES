#include <bits/stdc++.h>
using namespace std;

int main() {
    string str;
    cin >> str;
    int counter = 0, max_char = 0;
    char prev = str[0];
    for (char c : str) {
        if (c == prev) {
            counter++;  
        }
        else {
            max_char = max(counter, max_char);
            counter = 1;
        }
        prev = c;
    }
    max_char = max(counter, max_char);
    cout << max_char;
    return 0;
}