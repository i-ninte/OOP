#include <iostream>
using namespace std;

class Distance{
	private:
float inches,feet;
	Distance():feet(0), inches(0.0)
	{ }
	Distance(float i, float f){
	i= inches;
	f =feet;
	}
void getdist(){
cout<< "enter  feet";cin>>feet;
cout<< "enter inches";cin<<inches;
	
}
void showdist(){
cout<< feet<<"\'-"<< inches<<'\"'<<endl;
}
	Distance operator +(Distance);// adds two distances 
	
	Distance operator -(Distance);//subtracts two distances 
};
Distance Distance:: operator+(Distance d2){
	int f =feet + d2.feet;
	float i = inches + d2.inches;
	if(i>=12.0){
	i -=12.0;
		f++;
	}
	return Distance(i, f);
}

Distance Distance:: operator-(Distance d2){
float f = feet - d2.feet;
float i = inches - d2.inches;
	if (i<0){
		i+ =12;
		f--;
}
	return Distance(i,f);
	}

int main(){


return 0;
}