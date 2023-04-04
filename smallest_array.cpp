#include <iostream>
using namespace std;

int smallest(int array[],int  n){
	int i;
int min= array[0];
	for(i=1; i<n; i++){
	if (array[i]< min){
		min= array[i];
		return min;
	}
	}
int main (){
int array[] = {627,87,90,8};
	int n = sizeof(array)/sizeof(array[0]);
 cout << smallest(array,n);
return 0;
}