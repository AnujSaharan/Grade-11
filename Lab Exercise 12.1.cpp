//Lab Exercise 12.1
/*Program to find the average of all elements present in a 2D array*/
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

int sum=0;

cout<<"Enter the elements in the array: ";
for(unsigned int row_index=0;row_index<number_of_rows;row_index++) //Obtains the input
    {
    for(unsigned int column_index=0;column_index<number_of_columns;column_index++)
        {
        cin>>arr[row_index][column_index];
        sum+=arr[row_index][column_index];
        }
    }

cout<<"\nThe average of all elements in the array is: "<<(sum/(number_of_rows*number_of_columns)); //Displays the output

return 0;
}