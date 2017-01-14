//Lab Exercise 9.7
/*Program to assign the sum of corresponding elements of two arrays to a third array*/
//Anuj Saharan

#include <iostream.h>

int main()
{
int arr1[10],arr2[10],arr3[10];
unsigned int number_of_elements;

cout<<"Enter the number of elements: ";
cin>>number_of_elements;

//Code to obtain the input

cout<<"Enter the elements in the first array: ";
for(unsigned int index_1=0;index_1<number_of_elements;index_1++)
    {
    cin>>arr1[index_1];
    }

cout<<"Enter the values in the second array: ";
for(unsigned int index_2=0;index_2<number_of_elements;index_2++)
    {
    cin>>arr2[index_2];
    }

cout<<"The resulting array is: ";
for(unsigned int output_index=0;output_index<number_of_elements;output_index++) //Displays the output
    {
    arr3[output_index]=(arr1[output_index]+arr2[output_index]);
    cout<<arr3[output_index]<<" ";
    }
return 0;
}