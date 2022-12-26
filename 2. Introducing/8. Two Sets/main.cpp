#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    if (n == 3) {
        cout << "YES\n2\n1 2\n1\n 3";
    }
    else if (n == 4) {
        cout << "YES\n2\n1 4\n2\n2 3";
    }
    else if (n % 4 == 0) {
        vector<int> first;
        vector<int> second;
        cout << "YES\n";
        for (int i = 1; i < n; i += 4) {
            first.push_back(i);
            first.push_back(i + 3);
            second.push_back(i + 1);
            second.push_back(i + 2);
        }
        cout << first.size() << "\n";
        for (int i : first) {
            cout << i << " ";
        }
        cout << "\n";
        cout << second.size() << "\n";
        for (int i : second) {
            cout << i << " ";
        }  
    }
    else if (n % 4 == 3) {
        vector<int> first;
        vector<int> second;
        cout << "YES\n";
        first.push_back(1);
        first.push_back(2);
        second.push_back(3);
        for (int i = 4; i < n; i += 4) {
            first.push_back(i);
            first.push_back(i + 3);
            second.push_back(i + 1);
            second.push_back(i + 2);
        }
        cout << first.size() << "\n";
        for (int i : first) {
            cout << i << " ";
        }
        cout << "\n";
        cout << second.size() << "\n";
        for (int i : second) {
            cout << i << " ";
        }  
        
    }
    else {
        cout << "NO";
    }
    return 0;
}