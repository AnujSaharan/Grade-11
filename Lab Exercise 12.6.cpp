//Lab Exercise 12.6
/*Program to display the middle row and column of a 2D Array*/
//Anuj Saharan

#include <iostream.h>

void array_middle(int arr[][10],unsigned int total_rows,unsigned int total_columns) //Displays the middle row and column of a 2D Array
{
cout<<"\nElements of the middle row: ";
for(unsigned int column=0;column<total_columns;column++)
    {
    cout<<arr[(total_rows/2)][column]<<" ";
    }

cout<<"\nElements of middle column: ";
for(unsigned int row=0;row<total_rows;row++)
    {
    cout<<arr[row][(total_columns/2)]<<" ";
    }
}

int main()
{
int arr[10][10];

unsigned int number_of_rows,number_of_columns;
cout<<"Enter the number of rows: ";
cin>>number_of_rows;

cout<<"Enter the number of columns: ";
cin>>number_of_columns;

cout<<"\nEnter the elements in the array\n";
for(unsigned int row_index=0;row_index<number_of_rows;row_index++) //Obtains the input
    {
    for(unsigned int column_index=0;column_index<number_of_columns;column_index++)
        {
        cin>>arr[row_index][column_index];
        }
    }

array_middle(arr,number_of_rows,number_of_columns); //Output is displayed within the function

return 0;
}