//Lab Exercise 12.3
/*Program to swap the first column of a 2D Array with the last column*/
//Anuj Saharan

#include <iostream.h>

int main()
{
int arr[10][10];

unsigned int number_of_rows,number_of_columns;
cout<<"Enter the number of rows: ";
cin>>number_of_rows;

cout<<"Enter the number of columns: ";
cin>>number_of_columns;

cout<<"Enter the elements in the array: ";
for(unsigned int row_index=0;row_index<number_of_rows;row_index++) //Obtain the input
    {
    for(unsigned int column_index=0;column_index<number_of_columns;column_index++)
        {
        cin>>arr[row_index][column_index];
        }
    }

for(unsigned int swap_index=0;swap_index<=number_of_columns;swap_index++) //Obtains the output
    {
    int temp=arr[swap_index-1][0];
    arr[swap_index-1][0]=arr[swap_index-1][number_of_columns-1];
    arr[swap_index-1][number_of_columns-1]=temp;
    }

cout<<"\nAfter swapping:\n ";
for(unsigned int row_index=0;row_index<number_of_rows;row_index++) //Displays the output
    {
    for(unsigned int column_index=0;column_index<number_of_columns;column_index++)
        {
        cout<<arr[row_index][column_index]<<" ";
        }
    cout<<endl;
    }
return 0;
}