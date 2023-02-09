#include<iostream>
using namespace std;

int main() {

    int n;
    cout << "Enter value of n : " << endl;
    cin >> n;

    int row = 1;
    int stars = 1;

    while (row <= n) {
        int value = 1;
        int countOfStars = 1;
        while (countOfStars <= stars) {
            cout << value << " ";
            countOfStars++;
            value++;
        }
        cout << endl;
        row++;
        stars++;
    }
}

