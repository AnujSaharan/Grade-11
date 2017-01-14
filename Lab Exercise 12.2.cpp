//Lab Exercise 12.2
/*Program to count the multiples of 7 in a 2D Array*/
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

unsigned int output_counter=0;

cout<<"Enter the elements in the array: ";
for(unsigned int row_index=0;row_index<number_of_rows;row_index++) //Obtains the input
    {
    for(unsigned int column_index=0;column_index<number_of_columns;column_index++)
        {
        cin>>arr[row_index][column_index];

        if((arr[row_index][column_index])%7==0) {output_counter++;}
        }
    }

cout<<"\nThe number of multiples of 7 in the array is: "<<output_counter; //Displays the output

return 0;
}