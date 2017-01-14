//Lab Exercise 3.2
/*Program to check if a number is positive or negative using ternary operator*/
//Anuj Saharan

#include <iostream.h>

int main()
{
int number_input;

//Code to obtain input

cout<<"Enter a number: ";
cin>>number_input;

//Code to display the output

(number_input>0)?cout<<number_input<<" is positive":cout<<number_input<<" is negative";

return 0;
}