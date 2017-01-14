//Lab Exercise 11.1
/*Program to find the second highest element in an array*/
//Anuj Saharan

#include <iostream.h>

void bubble_sort(float arr[],unsigned int number_of_elements) //Sorts the elements of an array
{
for(unsigned int outer_arr_index=0;outer_arr_index<number_of_elements-1;outer_arr_index++)
    {
    for(unsigned int inner_arr_index=0;inner_arr_index<number_of_elements-1-outer_arr_index;inner_arr_index++)
        {
        if(arr[inner_arr_index]>arr[inner_arr_index+1])
            {
            int temp=arr[inner_arr_index];
            arr[inner_arr_index]=arr[inner_arr_index+1];
            arr[inner_arr_index+1]=temp;
            }
        }
    }
}

float second_highest(float arr[],unsigned int number_of_elements) //Returns the second highest value of an array
{
return arr[number_of_elements-2];
}

int main()
{
float arr[100];

unsigned int number_of_elements;
cout<<"Enter the number of elements: ";
cin>>number_of_elements;

cout<<"Enter the elements in the array: ";
for(unsigned int index=0;index<number_of_elements;index++) //Obtains the input
    {
    cin>>arr[index];
    }

bubble_sort(arr,number_of_elements);
cout<<"\nThe second highest element in the array is: "<<second_highest(arr,number_of_elements); //Displays the output

return 0;
}