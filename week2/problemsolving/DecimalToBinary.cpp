#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int n;
    cin >> n;

    int binary = 0;
    int i = 0;
    while (n != 0) {
        int rem = n % 2;
        binary = binary + (rem * pow(10, i++));
        n = n / 2;
    }
    cout << binary;
}