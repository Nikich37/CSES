#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, answer = 0;
    cin >> n;
    while (n > 4) {
        answer += n / 5;
        n /= 5;
    }
    cout << answer;
    return 0;
}