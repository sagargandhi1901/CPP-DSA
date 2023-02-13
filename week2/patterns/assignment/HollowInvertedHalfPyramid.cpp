#include<iostream>
using namespace std;

int main() {

    int n;
    cout << "Enter value of n : " << endl;
    cin >> n;

    int row = 1;
    int stars = n;

    while (row <= n) {

        if (row == 1 || row == n) {
            int countOfStars = 1;
            while (countOfStars <= stars) {
                cout << "* ";
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
        stars--;
    }
}

