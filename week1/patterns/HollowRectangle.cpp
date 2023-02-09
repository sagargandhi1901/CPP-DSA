#include<iostream>
using namespace std;

int main() {

    int rowCount;
    int colCount;
    cout << "Enter number of rows and columns respectively : " << endl;
    cin >> rowCount;
    cin >> colCount;

    int row = 1;
    int stars = colCount;

    while (row <= rowCount) {

        if (row == 1 || row == rowCount) {
            int countOfStars = 1;
            while (countOfStars <= stars) {
                cout << "* ";
                countOfStars++;
            }
        } else {
            cout << "* ";

            int countOfSpaces = 1;
            while (countOfSpaces <= stars - 2) {
                cout << "  ";
                countOfSpaces++;
            }

            cout << "* ";
        }
        cout << endl;
        row++;
    }
}
