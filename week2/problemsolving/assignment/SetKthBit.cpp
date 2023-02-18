#include <iostream>
using namespace std;

int setKthBit(int n, int k) {
    int value = 1 << k;
    int answer = n | value;
    return answer;
}

int main() {
    int n;
    int k;
    cin >> n >> k;

    int ans = setKthBit(n, k);
    cout << ans << endl;
}