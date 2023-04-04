#include <iostream>

uisng namespace std;

double bmi(double weight,double height){
height_n = height/100;

bmi = weight/(height_n*height_n);


return bmi;
}

int main(){
cout << "enter your height in centimetres"<< endl;
cin >> height;
cout<< " enter your weight in kilograms" << endl;
cin >> weight;

bmi(weight, height);
cout<< " your bmi is " << bmi << "kilogram per metre squared" << endl;
if (bmi < 18.5){

cout << " You are underweight"<< endl;

}
else if (  bmi >= 18.5 && bmi <= 24.5)

{
cout << "Your weight is normal" << endl;

}

else if ( bmi >= 24.5 && bmi <= 29.9){
cout << " You are overweight" << endl;

}

else if ( bmi >= 29.5 &&  bmi <= 39.9)
{
cout << "You are obese" << endl;

}

else {
cout << " You are morbidly obese" << endl;
}
return 0;
}