//Lab Exercise 2.4
/*Program to add two lengths of different units*/
//Anuj Saharan

#include <iostream.h>

int main()
{
unsigned int metres_1,metres_2,centimetres_1,centimetres_2;

//Code to obtain the input

cout<<"Length 1\n";
cout<<"Metres: ";
cin>>metres_1;
cout<<"Centimetres: ";
cin>>centimetres_1;

cout<<"\nLength 2\n";
cout<<"Metres: ";
cin>>metres_2;
cout<<"Centimetres: ";
cin>>centimetres_2;

//Code to calculate the output

unsigned int total_metres,total_centimetres;
total_metres=metres_1+metres_2;
total_centimetres=centimetres_1+centimetres_2;

cout<<"\nTotal Length = "<<total_metres<<" meters "<<total_centimetres<<" centimeters "; //Code to display the output

return 0;
}