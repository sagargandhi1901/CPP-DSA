#include <iostream>
using namespace std;

char findGrade(int marks) {
    if (marks >= 90) {
        return 'A';
    } else if (marks >= 75) {
        return 'B';
    } else if (marks >= 60) {
        return 'C';
    } else if (marks >= 50) {
        return 'D';
    } else {
        return 'F';
    }
}

int main() {
    int marks;
    cin >> marks;

    char grade = findGrade(marks);
    cout << "Grade : " << grade << endl;
}