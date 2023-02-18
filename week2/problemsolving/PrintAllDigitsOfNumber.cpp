#include <iostream>
using namespace std;

void printAllDigitsOfN(int num) {
    while (num != 0) {
        int rem = num % 10;
        cout << rem << " ";
        num = num / 10;
    }
}

int main() {
    int n;
    cin >> n;

    printAllDigitsOfN(n);
}