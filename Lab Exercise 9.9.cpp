//Lab Exercise 9.9
/*Program to assign first 5 values of the first array and last 5 values of the second array to a third array*/
//Anuj Saharan

#include <iostream.h>

int main()
{
int arr_1[30],arr_2[30],arr_3[30];
unsigned int number_of_elements_1,number_of_elements_2;

//Code to obtain the input

cout<<"Enter the number of elements in the first array: ";
cin>>number_of_elements_1;

cout<<"Enter the elements in the first array: ";
for(unsigned int index_1=0;index_1<number_of_elements_1;index_1++)
    {
    cin>>arr_1[index_1];
    }

cout<<"Enter the number of elements in the second array: ";
cin>>number_of_elements_2;

cout<<"Enter the elements in the second array: ";
for(unsigned int index_2=0;index_2<number_of_elements_2;index_2++)
    {
    cin>>arr_2[index_2];
    }

//Code to obtain the output

cout<<"The resultant array is: ";
for(unsigned int output_index_1=0;output_index_1<5;output_index_1++)
    {
    arr_3[output_index_1]=arr_1[output_index_1];
    }

unsigned int reverse_index=number_of_elements_2-5;
for(unsigned int output_index_2=5;output_index_2<10;output_index_2++)
    {
    arr_3[output_index_2]=arr_2[reverse_index];
    reverse_index++;
    }

for(unsigned int output_index_3=0;output_index_3<10;output_index_3++) //Displays the output
    {
    cout<<arr_3[output_index_3]<<" ";
    }
return 0;
}