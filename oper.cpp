#include <iostream>
using namespace std;

class Complex{

private:
int real;
int img;

public:
Complex(int r=0, int i=0){
    real= r;
     img =i;
}
void print(){ cout<< real << " + "<<  img<<"i";}

friend Complex operator+(Complex &c1, Complex &c2){


return Complex(c1.real+c2.real, c1.img+c2.img);
} 
};

int main(){


Complex c1(10,4), c2(7,8);
Complex c3 = c1 + c2;
c3.print();
    return 0;
}