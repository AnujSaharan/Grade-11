//Lab Exercise 9.5
/*Program to replace the even values in an array with their squares and odd values with their cubes*/
//Anuj Saharan

#include <iostream.h>

int main()
{
int arr[10];
unsigned int number_of_elements;

cout<<"Enter the number of elements: ";
cin>>number_of_elements;

cout<<"Enter the elements in the array: ";
for(unsigned int index=0;index<number_of_elements;index++) //Obtains the input and output
    {
    cin>>arr[index];

    if(arr[index]%2==0)
        {
        arr[index]=(arr[index]*arr[index]);
        }
    else
        {
        arr[index]=(arr[index]*arr[index]*arr[index]);
        }
    }

cout<<"The array after replacing even and odd values is: ";
for(unsigned int output_index=0;output_index<number_of_elements;output_index++) //Displays the output
    {
    cout<<arr[output_index]<<" ";
    }
return 0;
}