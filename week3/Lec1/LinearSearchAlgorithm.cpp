#include <iostream>
using namespace std;

bool searchElementInArray(int arr[], int size, int target) {
    for (int i = 0; i < size; ++i) {
        if (arr[i] == target) {
            return true;
        }
    }
    return false;
}

int main() {

    int arr[] = {5, 6, 7, 3, 2, 6, 9, 0};
    int size = 7;
    int target;
    cin >> target;

    if (searchElementInArray(arr, size, target)) {
        cout << "Found" << endl;
    } else {
        cout << "Not found" << endl;
    }
}