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

        int countOfStars = 1;
        while (countOfStars <= stars) {
            if (countOfStars % 2 == 1) {
                cout << "* ";
            } else {
                cout << "  ";
            }
            countOfStars++;
        }
        cout << endl;
        row++;
        stars+=2;
        spaces--;
    }

    row = 1;
    stars = (2 * n) - 1;
    spaces = 0;
    while (row <= n) {

        int countOfSpaces = 1;
        while (countOfSpaces <= spaces) {
            cout << "  ";
            countOfSpaces++;
        }

        int countOfStars = 1;
        while (countOfStars <= stars) {
            if (countOfStars % 2 == 1) {
                cout << "* ";
            } else {
                cout << "  ";
            }
            countOfStars++;
        }
        cout << endl;
        row++;
        stars-=2;
        spaces++;
    }
}


