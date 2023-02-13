#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter value of n : " << endl;
    cin >> n;

    int row = 1;
    int stars = n;
    int spaces = n - 2;

    while (row <= n) {
        if (row == 1 || row == n) {
            int countOfStars = 1;
            while (countOfStars <= stars) {
                cout << "* ";
                countOfStars++;
            }
        } else{
            cout << "* ";
            int countOfSpaces = 1;
            while (countOfSpaces <= spaces) {
                cout << "  ";
                countOfSpaces++;
            }
            cout << "* ";
        }

        cout << endl;
        row++;
    }
}