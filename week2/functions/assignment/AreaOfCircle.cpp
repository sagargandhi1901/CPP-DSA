#include <iostream>
using namespace std;

float calculateAreaOfCircle(float r) {
    float area = 3.14f * r * r;
    return area;
}

int main() {
    float radius;
    cin >> radius;

    float area = calculateAreaOfCircle(radius);
    cout << "Area : " << area << endl;
}