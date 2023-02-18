#include <iostream>
using namespace std;

double celciusToFahrenheit(double c) {
    double f =  c * 1.80 + 32.00;
    return f;
}
int main() {
    double cel;
    cin >> cel;

    double fah = celciusToFahrenheit(cel);
    cout << fah << endl;
}