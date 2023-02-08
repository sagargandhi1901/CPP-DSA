#include<iostream>
using namespace std;

int main() {

    int a = 5;
    int b = 3;

    //Arithmetic operators
    cout << a + b << endl;
    cout << a - b << endl;
    cout << a * b << endl;
    cout << a / b << endl;
    cout << a % b << endl;

    int num1;
    int num2;
    cin >> num1;
    cin >> num2;

    //Relational Operators
    cout << (num1 > num2) << endl;
    cout << (num1 < num2) << endl;
    cout << (num1 >= num2) << endl;
    cout << (num1 <= num2) << endl;
    cout << (num1 != num2) << endl;
    cout << (num1 == num2) << endl;

    //Logical operators
    cout << (num1 >= 10 && num2 <= 7) << endl;
    cout << (num1 < 10 && num2 > 7) << endl;
    cout << (num1 < 10 || num2 > 7) << endl;
    cout << (num1 < 10) << endl;
    cout << !(num1 < 10) << endl;
}
