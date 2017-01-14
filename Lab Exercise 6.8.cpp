// Lab Exercise 6.8
/*Program to calculate the LCM and HCF of two numbers*/
//Anuj Saharan

#include <iostream.h>
int main()
{
//Code to obtain the input

unsigned int number_1=0,number_2=0,product=1;

cout<<"Enter the first number: ";
cin>>number_1;
cout<<"Enter the second number: ";
cin>>number_2;
product=number_1*number_2;

while(number_1!=number_2) //Calculates the output
    {
    if(number_1>number_2) {number_1-=number_2;}
    else {number_2-=number_1;}
    }

//Code to display output

cout<< "HCF = "<<number_1<<endl;
cout<< "LCM = "<<product/number_1<<endl;

return 0;
}