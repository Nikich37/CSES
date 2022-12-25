#include <bits/stdc++.h>
using namespace std;

// next_permutation() - породжает новую перестановку следующую в лексиграфическом порядке
const int n = 3;
vector<int> permutation;
bool chosen[n + 1];

void search() {
    if (permutation.size() == n) {
        for (int i : permutation) {
            std::cout << i << " ";
        }
        std::cout << "\n";
    }
    else {
        for (int i = 1; i <= n; i++) {
            if (chosen[i]) continue;
            chosen[i] = true;
            permutation.push_back(i);
            search();
            chosen[i] = false;
            permutation.pop_back();
        }
    }
}

int main() {
    search();
}