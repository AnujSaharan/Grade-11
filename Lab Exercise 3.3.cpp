//Lab Exercise 3.3
/*Program to find the greatest of 3 numbers using ternary operator*/
//Anuj Saharan

#include <iostream.h>

int main()
{
int number_1,number_2,number_3;

//Code to obtain the input

cout<<"Enter the first number: ";
cin>>number_1;
cout<<"Enter the second number: ";
cin>>number_2;
cout<<"Enter the third number: ";
cin>>number_3;

//Code to display the output

(number_1>number_2&&number_1>number_3)?cout<<number_1<<" is the greatest":(number_2>number_3)?cout<<number_2<<" is the greatest": cout<<number_3<<" is the greatest";

return 0;
}