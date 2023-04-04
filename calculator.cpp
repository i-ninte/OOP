#include <iostream>
using namespace std;

int main() {
  char response;
  float a, b;
  
    cout << "enter the first value ";
    cin >> a;
    cout << "enter the second value ";
    cin >> b;
    cout << "enter +, -, *, / , for addition, subtraction, multiplication or "
            "division respectively"
         << endl;
        
    cin >> response;
    while (response !='n'){
    switch (response) {
    case '+':
      cout << a + b ; break;
    case '-':
      cout << a - b;
      break;
    case '*':
      cout << a * b;
      break;
    case '/':
      cout << a / b;
      break;
    default:
      cout << " try again";
    }
       cout << " do you want to start again? (y/n): "; 
  cin>>response;
    if (response == 'n') {
        break;
    }
}
    
    
 
  return 0;
}