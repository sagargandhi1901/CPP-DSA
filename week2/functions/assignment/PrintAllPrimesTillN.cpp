#include <iostream>
using namespace std;

bool checkPrime(int num) {
    bool result = true;
    for (int i = 2; i < num; i++) {
        if (num % i == 0) {
            result = false;
        }
    }
    return result;
}

int main() {
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++) {
        bool isPrime = checkPrime(i);
        if (isPrime) {
            cout << i << " ";
        }
    }
}