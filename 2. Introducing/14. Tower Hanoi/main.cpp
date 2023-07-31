#include <bits/stdc++.h>
using namespace std;

void hanoi(int disks, int source, int auxiliary, int dest) {
    if (disks == 1) {
        cout << source << " " << dest << "\n";
    }
    else {
        hanoi(disks - 1, source, dest, auxiliary);
        cout << source << " " << dest << "\n";
        hanoi(disks - 1,  auxiliary, source, dest);
    }
}

int main() {
    int n;
    cin >> n;
    cout << (1 << n) - 1 << "\n";
    hanoi(n, 1, 2, 3);
}