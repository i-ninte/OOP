#include <iostream>
using namespace std;
int main ( ) {  
  int n ;  
  double arr [ 100 ] ;  
  cout << " enter the number of elements ( 1 to 100 ) : " << endl ;  
  cin >> n ;  
  for ( int i = 0 ; i < n ; + + i ) {  
    cout << "enter number : " << i + 1 << endl;  
    cin >> arr [ i ] ;  
  }  
  // storing the largest number to arr [ 0 ]  
  for ( int i = 1 ; i < n ; + + i ) {  
    if ( arr [ 0 ] < arr [ i ] ) {  
      arr [ 0 ] = arr [ i ] ;  
    }  
  }  
  cout<< " Largest element = " , arr [ 0 ] ) ;  
  return 0 ;  
}  