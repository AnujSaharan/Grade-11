//Lab Exercise 8.4
/*Program to calculate x to the power y using a function*/
//Anuj Saharan

#include <iostream.h>

double power(double number,int exponent_value=2) //Calculates 'N' to the power 'P'
{
double product=1;
for(int counter=1;counter<=exponent_value;counter++)
    {
    product*=number;
    }
return product;
}

int main() //Main Function
{
//Code to obtain input from the user

double Base_Value;
cout<<"Enter the base value: ";
cin>>Base_Value;

int Exponent_Value;
cout<<"Enter the exponent value: ";
cin>>Exponent_Value;

cout<<endl<<Base_Value<<" to the power "<<Exponent_Value<<" is "<<power(Base_Value,Exponent_Value); //Displays the output

return 0;
}