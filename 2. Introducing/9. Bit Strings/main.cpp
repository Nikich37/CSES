#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n;
    cin >> n;
    long long answer = 1;
    for(int i = 0; i < n; i++) {
        answer = (answer * 2) % (int)(1e9 + 7);
    }
    cout << answer;
    return 0;
}