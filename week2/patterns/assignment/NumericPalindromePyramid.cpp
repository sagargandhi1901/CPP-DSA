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

        int value = 1;

        int countOfSpaces = 1;
        while (countOfSpaces <= spaces) {
            cout << "  ";
            countOfSpaces++;
        }

        int countOfStars = 1;
        while (countOfStars <= stars) {
            cout << value << " ";
            if (countOfStars <= stars / 2) {
                value++;
            } else {
                value--;
            }
            countOfStars++;
        }
        cout << endl;
        row++;
        stars+=2;
        spaces--;
    }
}


