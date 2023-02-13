#include<iostream>
using namespace std;

int main() {

    int n;
    cout << "Enter value of n : " << endl;
    cin >> n;

    int row = 1;
    int stars = 1;

    while (row <= n) {
        if (row == 1 || row == n) {
            int value = 1;
            int countOfStars = 1;
            while (countOfStars <= stars) {
                cout << value << " ";
                countOfStars++;
                value++;
            }
        } else {
            int value = 1;
            int countOfStars = 1;
            while (countOfStars <= stars) {
                if (countOfStars == 1 || countOfStars == stars) {
                    cout << value << " ";
                } else {
                    cout << "  ";
                }
                countOfStars++;
                value++;
            }
        }
        cout << endl;
        row++;
        stars++;
    }
}

