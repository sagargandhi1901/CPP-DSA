#include <iostream>
using namespace std;

void printCounting(int n) {
    int i = 1;
    while (i <= n) {
        cout << i << " ";
        i++;
    }
}

int main() {
    int n;
    cin >> n;

    printCounting(n);
}