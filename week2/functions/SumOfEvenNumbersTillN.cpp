#include <iostream>
using namespace std;

int calculateEvenSum(int n) {
    int result = 0;
    for (int i = 2; i <= n; i+=2) {
        result = result + i;
    }
    return result;
}

int main() {
    int n;
    cin >> n;

    int sum = calculateEvenSum(n);
    cout << "Sum : " << sum << endl;
}