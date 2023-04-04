#include <iostream>
#include<cmath>
using namespace std;

double power(double n, int p=2){

return pow(n,p);
}
int main(){
    double n;
     int p;
cout<< "enter the value of n "<<endl;
cin>>n;
cout<<"enter value of p "<<endl;
cin>>p;
cout<< pow(n,p);

    return 0;
}