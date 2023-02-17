#include <iostream>
using namespace std;

int main() {

    bool a = true;
    bool b = false;
    bool c = true;

    cout << (a & b) << endl;
    cout << (a | b) << endl;
    cout << (a & c) << endl;
    cout << (a | c) << endl;
    cout << (~a) << endl;
    cout << (~b) << endl;
    cout << (a ^ c) << endl;
    cout << (a ^ b) << endl;
    cout << (b ^ c) << endl;
    cout << (2 & 3) << endl;
    cout << (5 & 10) << endl;
}
