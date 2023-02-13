#include<iostream>
using namespace std;

int main() {

    int n;
    cout << "Enter value of n : " << endl;
    cin >> n;
    int number = 1;

    for (int row = 0; row < n; row++) {

        number = 1;
        for (int col = 0; col <= row; col++) {
            cout << number << " ";
            number = number * (row - col) / (col + 1);
        }
        cout << endl;
    }
}