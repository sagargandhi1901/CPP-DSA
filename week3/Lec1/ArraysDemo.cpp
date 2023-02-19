#include <iostream>
using namespace std;

int main() {

    // Declaring an array of size 6
    int arr[5];

    // Declaration and initialization
    int arr2[] = {1, 2, 3, 4, 5, 6};

    // Calculating length of an array
    int size = sizeof(arr2) / sizeof(arr2[0]);
    cout << "Length of array 2 is : " << size << endl;

    // Declaration and initialization with user input values
    cout << "Enter the size of array 3 : " << endl;
    int n;
    cin >> n;

    int arr3[n];
    cout << "Enter the values : " << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr3[i];
    }

    // Accessing an array element
    cout << "Value at 2 index : " << arr3[2] << endl;

    // Printing entire array elements
    cout << "Elements in array 3 : " << endl;
    for (int i = 0; i < n; i++) {
        cout << arr3[i] << " ";
    }
}