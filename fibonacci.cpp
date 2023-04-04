#include <iostream>
using namespace std;
int fact(int number) {
  if ((number == 1) || (number == 0))
    return 1;
  else
    return number * fact(number - 1);
}
int main() {
  int number;
  cout << " enter a number" << endl;
  cin >> number;
  cout << " the factorial of the number " << number << " is " << fact(number)
       << endl;

  return 0;
}