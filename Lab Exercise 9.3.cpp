//Lab Exercise 9.3
/*Program to swap the first and last element of an array*/
//Anuj Saharan

#include<iostream.h>

int main()
{
int arr[10];
unsigned int number_of_elements;

cout<<"Enter the number of elements: ";
cin>>number_of_elements;

cout<<"Enter the elements in the array: "; //Obtains the input
for(unsigned int index=0;index<number_of_elements;index++)
    {
    cin>>arr[index];
    }

cout<<"\nBEFORE SWAPPING\n";
cout<<"The first element in the array is: "<<arr[0];
cout<<"\nThe last element in the array is: "<<arr[number_of_elements-1];

//Code to swap the elements

int temp;
temp=arr[number_of_elements-1];
arr[number_of_elements-1]=arr[0];
arr[0]=temp;

//Code to display the output

cout<<"\n\nAFTER SWAPPING\n";
cout<<"The first element in the array is: "<<arr[0];
cout<<"\nThe last element in the array is: "<<arr[number_of_elements-1];

return 0;
}