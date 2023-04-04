#include <iostream>

using namespace std;

int main()
{
    int n;
    cout << "Enter the number of terms in the Fibonacci sequence: ";
    cin >> n;

    int fib1 = 0, fib2 = 1;
    cout << "Fibonacci sequence: " << fib1 << " " << fib2 << " ";

    for(int i = 3; i <= n; i++) {
        int fib3 = fib1 + fib2;
        cout << fib3 << " ";
        fib1 = fib2;
        fib2 = fib3;
    }

    cout << endl;

    return 0;
}
