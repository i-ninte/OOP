#include <iostream>
using namespace std;

int main()
{
    int array[50], *max, *min, size, i; // pointer variables declared for max and min

    cout << "Enter the number of elements in array\n";
    cin >> size;
    cout << "Enter array elements\n";
    for (i = 0; i < size; i++)
        cin >> array[i];
	max = array; // assigning max pointer to the address of the first element
    min = array; // assigning min pointer to the address of the first element

    for (i = 0; i < size; i++)
    {
        // Finding the largest element in the array
        if (*(array + i) > *max) // check if the value stored at array+i is greater than value stored at max
            *max = *(array + i);
    }
    cout << "Maximum element in the array is " << *max << "\n";

    for (i = 0; i < size; i++)
    {
        // Finding the smallest element in the array
        if (*(array + i) < *min) // check if the value stored at array+i is lesser than value stored at min
            *min = *(array + i);
    }
    cout << "Minimum element in the array is " << *min << "\n";
return 0;
}