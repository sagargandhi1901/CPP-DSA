#include<iostream>
using namespace std;

int main() {

    int n;
    cout << "Enter value of n : " << endl;
    cin >> n;

    int row = 1;
    int stars = 1;

    while (row <= n) {

        int countOfStars = 1;
        while (countOfStars <= stars) {
            cout << "* ";
            countOfStars++;
        }
        cout << endl;
        row++;
        stars++;
    }
}

