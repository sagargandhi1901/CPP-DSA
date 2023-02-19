#include <iostream>
using namespace std;

int main() {

    int arr[] = {6, 8, 3, 1, 12, 34, 9, 23};
    int size = 8;

    int min = INT_MAX;
    for (int i = 0; i < size; ++i) {
        if (arr[i] < min) {
            min = arr[i];
        }
    }
    cout << "Minimum element in array is : " << min << endl;
}