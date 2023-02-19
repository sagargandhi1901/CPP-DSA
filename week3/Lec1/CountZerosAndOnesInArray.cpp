#include <iostream>
using namespace std;

int main() {

    int arr[] = {1, 0, 1, 1, 0, 1, 0, 1, 0, 0, 1};
    int size = 11;

    int countZeros = 0;
    int countOnes = 0;

    for (int i = 0; i < size; ++i) {
        if (arr[i] == 0) countZeros++;
        if (arr[i] == 1) countOnes++;
    }

    cout << "Zeros : " << countZeros << endl;
    cout << "Ones : " << countOnes << endl;
}