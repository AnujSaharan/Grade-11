//Lab Exercise 9.8
/*Program to swap an element of an array with the next if it is a multiple of 10*/
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

for(unsigned int check_index=0;check_index<number_of_elements-1;check_index++) //Obtains the output
    {
    if(arr[check_index]%10==0)
        {
        temp=arr[check_index];
        arr[check_index]=arr[check_index+1];
        arr[check_index+1]=temp;
        check_index++;
        }
    }

cout<<"The resultant array is: ";
for(unsigned int output_index=0;output_index<number_of_elements;output_index++) //Displays the output
    {
    cout<<arr[output_index]<<" ";
    }
return 0;
}