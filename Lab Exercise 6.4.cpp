//Lab Exercise 6.4
/*Program to find the value of one number raised to another using a loop.*/
//Anuj Saharan

#include <iostream.h>

int main()
{
//Code to obtain the input

int number_1,number_2,product=1;
cout<<"Enter the first number: ";
cin>>number_1;
cout<<"Enter the second number: ";
cin>>number_2;

while(number_2>0) //Calculates the output
    {
    product*=number_1;
    number_2--;
    }
cout<<"Result: "<<product; //Displays the output

return 0;
}