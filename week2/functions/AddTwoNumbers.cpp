#include <iostream>
using namespace std;

int calculateSum(int num1, int num2) {
    int result = num1 + num2;
    return result;
}

int main() {
    int a;
    int b;

    cin >> a >> b;

    int sum = calculateSum(a, b);
    cout << sum << endl;
}