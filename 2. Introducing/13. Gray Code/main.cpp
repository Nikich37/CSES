#include <bits/stdc++.h>
using namespace std;

void grey_code(int n)
{
     // power of 2
    for (int i = 0; i < (1 << n); i++)
    {
        // Generating the decimal
        // values of gray code then using
        // bitset to convert them to binary form
        int val = (i ^ (i >> 1));
         
        // Using bitset
        bitset<32> r(val);
         
        // Converting to string
        string s = r.to_string();
        cout << s.substr(32 - n) << "\n";
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n; 
    cin >> n;
    
    grey_code(n);
}