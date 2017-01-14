//Lab Exercise 9.4
/*Program to reverse the order of elements in an array*/
//Anuj Saharan

#include <iostream.h>

int main()
{
int arr[10],temp;
unsigned int number_of_elements;

cout<<"Enter the number of elements: ";
cin>>number_of_elements;

cout<<"Enter the elements in the array: ";
for(unsigned int index=0;index<number_of_elements;index++) //Obtains the input
    {
    cin>>arr[index];
    }

int reverse_index=number_of_elements-1;
for(unsigned int swap_index=0;swap_index<number_of_elements/2;swap_index++) //Obtains the output
    {
    temp=arr[swap_index];
    arr[swap_index]=arr[reverse_index];
    arr[reverse_index]=temp;
    reverse_index--;
    }

cout<<"The array in reverse order is: ";
for(unsigned int output_index=0;output_index<number_of_elements;output_index++) //Displays the output
    {
    cout<<arr[output_index]<<" ";
    }
return 0;
}