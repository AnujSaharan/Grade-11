//Lab Exercise 6.14
/*Program to multiply two numbers using a loop*/
//Anuj Saharan

#include <iostream.h>

int main()
{
int number_1,number_2,product=0;

//Code to obtain the input

cout<<"Enter the first number: ";
cin>>number_1;
cout<<"Enter the second number: ";
cin>>number_2;

while(number_2>0) //Calculates the output
    {
    product+=number_1;
    number_2--;
    }
cout<<"Result: "<<product;

return 0;
}