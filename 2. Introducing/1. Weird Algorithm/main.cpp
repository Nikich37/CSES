#include <iostream>

int main() {
    long long n;
    std::cin >> n;
    while (n != 1) {
        std::cout << n << " ";
        if (!(n % 2)) {
            n /= 2;
        }
        else if(n % 2) {
            n = n * 3 + 1;
        }
    }
    std::cout << n;
}