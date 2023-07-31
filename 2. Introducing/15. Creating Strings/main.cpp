#include <bits/stdc++.h>
using namespace std;

int main() {
    string str;
    cin >> str;
    vector<string> permutations;
    sort(str.begin(), str.end());
    do {
        permutations.push_back(str);
    } while (next_permutation(str.begin(), str.end()));
    cout << permutations.size() << "\n";
    for (string permutation : permutations) {
        cout << permutation << "\n";
    }
}