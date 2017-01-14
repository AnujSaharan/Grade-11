//Lab Exercise 1.2
/*Program to compute the area of a rectangle with user defined dimensions*/
//Anuj Saharan

#include <iostream.h>

int main()
{
unsigned int length,breadth,area;

//Code to obtain the input

cout<<"Enter the length of the rectangle: ";
cin>>length;
cout<<"Enter the breadth of the rectangle: ";
cin>>breadth;

area=(length*breadth); //Calculates the output
cout<<"\nThe area of the rectangle is: "<<area<<"m"; //Displays the output

return 0;
}