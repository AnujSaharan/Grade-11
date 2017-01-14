//Lab Exercise 8.1
/*Program to add two numbers by taking them as arguments in a function*/
//Anuj Saharan

#include <iostream.h>

int sum(int number_1,int number_2) //Calculates the sum of two numbers
{
return number_1+number_2;
}

int main() //Main Function
{
int number_1,number_2;

cout<<"Enter two numbers: ";
cin>>number_1>>number_2; //Obtains the input

cout<<"The sum of the two numbers is: "<<sum(number_1,number_2); //Displays the output

return 0;
}