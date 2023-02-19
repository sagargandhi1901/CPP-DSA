#include <iostream>
using namespace std;

int main() {

    int arr[] = {6, 8, 3, 1, 12, 34, 9, 23};
    int size = 8;

    int max = INT_MIN;
    for (int i = 0; i < size; ++i) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    cout << "Maximum element in array is : " << max << endl;
}