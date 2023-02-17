#include <iostream>
using namespace std;

int calculateFactorial(int num) {
    int result = 1;
    for (int i = 1; i <= num; i++) {
        result = result * i;
    }
    return result;
}

int main() {
    int n;
    cin >> n;

    int fact = calculateFactorial(n);
    cout << "Factorial of " << n << " : " << fact << endl;
}