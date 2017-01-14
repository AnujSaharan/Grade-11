//Lab Exercise 8.5
/*Program to set the smaller of the values to zero using a function*/
//Anuj Saharan

#include <iostream.h>

void zero_small(int &num1,int &num2) //Substitutes the smaller value with zero
{
if(num1>num2) {num2=0;}
else if(num2>num1) {num1=0;}
else {cout<<"Both the numbers are equal";}
}

int main() //Main Function
{
int num1,num2;
cout<<"Enter two numbers: ";
cin>>num1>>num2; //Obtains the input

cout<<"\nORIGINAL VALUES\n";
cout<<"\nFirst Number: "<<num1<<endl<<"Second Number: "<<num2<<endl; //Displays the numbers before substituting

zero_small(num1,num2);

cout<<"\nPROCESSED VALUES\n";
cout<<"\nFirst Number: "<<num1<<endl<<"Second Number: "<<num2; //Displays the numbers after substituting

return 0;
}