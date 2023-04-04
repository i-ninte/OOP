#include <iostream>
using namespace std;
int funct_largest(int array[], int n){
int i;
int max = array[0];
	
for (i=1; 1<n; i++;){
	
if (array[i] > max)
	max = array[i];
	return max;
}

}

int main(){
int array[]={1,2,3,4,5};
	int n = sizeof(array)/sizeof(array[0]);
	cout<< funct_largest(array, n)<< endl;
	
	return 0;
}





