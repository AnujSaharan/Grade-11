//Lab Exercise 12.5
/*Program to display the 'Upper Half' of a 2D Array*/
//Anuj Saharan

#include <iostream.h>

void upper_half(int arr[10][10],unsigned int total_rows, unsigned int total_columns) //Displays the upper half of a 2D Array
{
cout<<"\n\n";
for(unsigned int row=0;row<total_rows;row++)
    {
   for(unsigned int column=0;column<total_columns;column++)
        {
        if(row<=column)  {cout<<arr[row][column]<<" ";}
        else {cout<<"  ";}
        }
    cout<<endl;
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

upper_half(arr,number_of_rows,number_of_columns); //Output is displayed within the function

return 0;
}