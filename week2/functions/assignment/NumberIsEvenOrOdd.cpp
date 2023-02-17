#include <iostream>
using namespace std;

void checkEvenOrOdd(int num) {
    if (num % 2 == 0) {
        cout << "Even" << endl;
    } else {
        cout << "Odd" << endl;
    }
}

int main() {
    int n;
    cin >> n;

    checkEvenOrOdd(n);
}