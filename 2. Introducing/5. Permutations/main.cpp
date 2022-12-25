#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; 
    cin >> n;
    if (n == 1) {
        cout << 1;
    }
    else if (n <= 3) {
        cout << "NO SOLUTION";
    }
    else if (n == 4) {
        cout << "2 4 1 3";
    }
    else {
        int counter = 0, i = 1;
        bool nums_added[n + 1]{false};
        while (counter != n) {
            cout << i << " ";
            nums_added[i] = true;
            i += 2;
            if (i > n) {
                i %= n;
                while(nums_added[i]) {
                    i++;
                }
            }
            counter++;
        }
    }
    return 0;
}