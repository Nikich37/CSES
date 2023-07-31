#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; 
    cin >> n;
    for (int i = 0; i < n; i++) {
        long long pos;
        cin >> pos;
        long long prev = 0, cur = 0, digits = 1, num_of_dig = 9;
        while (pos > cur) {
            prev = cur;
            cur += digits * num_of_dig;
            digits++;
            num_of_dig *= 10;
        }
        
        pos -= prev;
        
        digits--;
        long long start = pow(10, digits - 1);
        long long delta = 0;
        if (pos % digits) {
            delta = pos / digits;
        }
        else {
            delta = pos / digits - 1;
        }
        
        long long digit = (pos - 1) % digits;
        long long answer = start + delta;
        string ans = to_string(answer);
        cout << ans[digit] << "\n";
    }
}