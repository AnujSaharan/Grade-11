//Lab Exercise 9.6
/*Program to assign values to a second array depending upon the values of the first array*/
//Anuj Saharan

#include <iostream.h>

int main()
{
int arr1[10],arr2[10];
unsigned int number_of_elements;

cout<<"Enter the number of elements: ";
cin>>number_of_elements;

cout<<"Enter the elements in the array: ";
for(unsigned int index=0;index<number_of_elements;index++) //Obtains the input and output
    {
    cin>>arr1[index];

    if(arr1[index]>0) {arr2[index]=1;}
    else if(arr1[index]<0) {arr2[index]=-1;}
    else {arr2[index]=0;}
    }

cout<<"The corresponding values for the second array are: ";
for(unsigned int output_index=0;output_index<number_of_elements;output_index++) //Displays the output
    {
    cout<<arr2[output_index]<<" ";
    }
return 0;
}