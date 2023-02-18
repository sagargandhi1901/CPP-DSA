#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    cout << "Distance in km is : " << n << endl;
    cout << "Distance in miles is : " << (1 / 1.6) * n << endl;
}