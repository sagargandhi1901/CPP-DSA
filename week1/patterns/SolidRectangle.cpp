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

        int countOfStars = 1;
        while (countOfStars <= stars) {
            cout << "* ";
            countOfStars++;
        }
        cout << endl;
        row++;
    }
}
