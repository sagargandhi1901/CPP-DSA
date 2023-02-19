#include <iostream>
using namespace std;

int main() {

    int arr[] = {1, 2, 3, 4, 5, 6};
    int size = 6;

    int start = 0;
    int end = size - 1;

    while (start <= end) {
//        swap(arr[start], arr[end]);                             // pre defined function'

        int temp = arr[start];                                    // without using inbuilt function
        arr[start] = arr[end];
        arr[end] = temp;

        start++;
        end--;
    }

    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
}