//Lab Exercise 11.2
/*Program to check if an element is present in an array*/
//Anuj Saharan

#include <iostream.h>

int linear_search(int arr[],unsigned int number_of_elements,int search_element)
{
for(unsigned int find_index=0;find_index<number_of_elements;find_index++)
    {
    if(arr[find_index]==search_element)
        {
        return 1;
        }
    }
return 0;
}

int main()
{
int arr[100];

unsigned int number_of_elements;
cout<<"Enter the number of elements: ";
cin>>number_of_elements;

cout<<"Enter the elements in the array: ";
for(unsigned int index=0;index<number_of_elements;index++) //Obtains the input
    {
    cin>>arr[index];
    }

int search_element;
cout<<"Enter the element you want to search: ";
cin>>search_element;

//Code to display the output

if(linear_search(arr,number_of_elements,search_element)==1) {cout<<"\n"<<search_element<<" is present in the array";}
else {cout<<"\n"<<search_element<<" is not present in the array";}
return 0;
}