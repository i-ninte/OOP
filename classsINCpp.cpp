#include <iostream>
using namespace std;
class Mycar { // name of the class 
    // attributes
    public:
int year;
string colour;
int mileage;
string brand;
};

int main(){
   Mycar Car1;
   Car1.colour = " red";
   Car1.mileage = 244;
   Car1.year = 2023;
   Car1.brand = " Lamboghini Aventado";
   cout<< Car1.colour<<  " "<< Car1.mileage<<" "<<Car1.year<< " "<<Car1.brand <<endl;
    
    
    
    return 0;
}