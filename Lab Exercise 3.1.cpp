//Lab Exercise 3.1
/*Program to check if a number is even or odd using ternary operator*/
//Anuj Saharan

#include <iostream.h>

int main()
{
int number_input;

//Code to obtain the input

cout<<"Enter a number: ";
cin>>number_input;

//Code to display the output

(number_input%2==0)?cout<<number_input<< " is even":cout<<number_input<< " is odd.";

return 0;
}