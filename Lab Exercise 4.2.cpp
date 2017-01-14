//Lab Exercise 4.2
/*Program to display the absolute value of a number*/
//Anuj Saharan

#include <iostream.h>

int main()
{
int number_input;

//Code to obtain the input

cout<<"Enter any number: ";
cin>>number_input;

//Code to display the output

cout<<"The absolute value is: ";
if(number_input>0) {cout<<number_input;}
else {cout<<-(number_input);}

return 0;
}