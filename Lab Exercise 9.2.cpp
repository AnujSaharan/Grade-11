//Lab Exercise 9.2
/*Program to find the highest and lowest value in an array*/
//Anuj Saharan

#include <iostream.h>

int main()
{
int arr[10],lowest_value,highest_value;
unsigned int number_of_elements=0;

cout<<"Enter the number of elements: ";
cin>>number_of_elements;

cout<<"Enter the elements in the array: "; //Obtains the input
for(unsigned int index=0;index<number_of_elements;index++)
    {
    cin>>arr[index];
    }

lowest_value=arr[0];
highest_value=arr[0];

for(unsigned int check_index=0;check_index<number_of_elements;check_index++) //Obtains the output
    {
    if(arr[check_index]<lowest_value) {lowest_value=arr[check_index];}
    if(arr[check_index]>highest_value) {highest_value=arr[check_index];}
    }

//Code to display the output

cout<<"\nThe lowest value in the array is: "<<lowest_value;
cout<<"\nThe highest value in the array is: "<<highest_value;

return 0;
}