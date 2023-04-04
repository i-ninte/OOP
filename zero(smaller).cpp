#include <iostream>

using namespace std;

void zeroSmaller(int& a, int& b) {
    if (a < b) {
        a = 0;
    } else {
        b = 0;
    }
}

int main() {
    int num1, num2;

    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    cout << "Before function call: num1 = " << num1 << ", num2 = " << num2 << endl;

    zeroSmaller(num1, num2);

    cout << "After function call: num1 = " << num1 << ", num2 = " << num2 << endl;

    return 0;
}
