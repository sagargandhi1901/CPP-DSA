#include<iostream>
using namespace std;

int main() {

    int n;
    cout << "Enter value of n : " << endl;
    cin >> n;

    int row = 1;
    int stars = 1;
    int spaces = n - 1;

    while (row <= n) {

        int countOfSpaces = 1;
        while (countOfSpaces <= spaces) {
            cout << "  ";
            countOfSpaces++;
        }

        if (row == 1 || row == n) {
            int countOfStars = 1;
            while (countOfStars <= stars) {
                if (countOfStars % 2 == 1) {
                    cout << "* ";
                } else {
                    cout << "  ";
                }
                countOfStars++;
            }
        } else {
            int countOfStars = 1;
            while (countOfStars <= stars) {
                if (countOfStars == 1 || countOfStars == stars) {
                    cout << "* ";
                } else {
                    cout << "  ";
                }
                countOfStars++;
            }
        }
        cout << endl;
        row++;
        stars+=2;
        spaces--;
    }
}


