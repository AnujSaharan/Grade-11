//Lab Exercise 1.6
/*Program to swap the values of two variables using a temporary variable*/
//Anuj Saharan

#include <iostream.h>

int main()
{
int a,b;

//Code to obtain the input

cout<<"Enter the value of a: ";
cin>>a;
cout<<"Enter the value of b: ";
cin>>b;

//Code to swap the variables

int c;
c=a;
a=b;
b=c;

//Code to display the output

cout<<"\nSwapped a= "<<a;
cout<<"\nSwapped b= "<<b;

return 0;
}