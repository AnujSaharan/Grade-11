//Lab Exercise 9.1
/*Program to find the sum and average of all elements in an array*/
//Anuj Saharan

#include <iostream.h>

int main()
{
int arr[10];
unsigned int number_of_elements;
float average=0,sum=0;

cout<<"Enter the number of elements: ";
cin>>number_of_elements;

cout<<"Enter the elements in the array: ";
for(unsigned int index=0;index<number_of_elements;index++) //Obtains the input
    {
    cin>>arr[index];
    sum+=arr[index];
    }
average=sum/number_of_elements;

//Code to display the output

cout<<"\nThe average of all the numbers in the array is: "<<average<<"\n";
cout<<"The sum of all the numbers in the array is: "<<sum<<"\n";

return 0;
}