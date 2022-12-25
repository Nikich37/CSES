#include <bits/stdc++.h>
using namespace std;

const int n = 16;
int counter = 0;
bool col[n], diag1[n + 2], diag2[n + 2];

void search(int y) {
    if (y == n) {
        counter++;
        return;
    }
    for (int x = 0; x < n; x++) {
        if (col[x] || diag1[x + y] || diag2[x - y + n - 1]) continue;
        col[x] = diag1[x + y] = diag2[x - y + n - 1] = 1;
        search(y + 1);
        col[x] = diag1[x + y] = diag2[x - y + n - 1] = 0;
    }
}

int main() {
    search(0);
    cout << counter;
}