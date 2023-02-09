#include <iostream>
using namespace std;

int main() {

    char ch = 97;                                       //Implicit typecasting
    cout << ch << endl;

    int num = 'B';                                      //Implicit typecasting
    cout << num << endl;

    double d = 5.7;
    int num2 = (int) d;                                 //Explicit typecasting
    cout << num2 << endl;

    int num3 = 178;
    double d2 = (double) num3;                          //Explicit typecasting
    cout << d2 << endl;
}