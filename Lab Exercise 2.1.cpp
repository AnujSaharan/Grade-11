//Lab Exercise 2.1
/*Program to reverse a 4 digit number and display the sum of its digits*/
//Anuj Saharan

#include <iostream.h>

int main()
{
int num;

//Code to obtain the input

cout<<"Enter a four digit number: ";
cin>>num;

//Code to perform calculations and obtain the digits separately

int first_digit,second_digit,third_digit,fourth_digit;

fourth_digit=num%10;
num/=10;
third_digit=num%10;
num/=10;
second_digit=num%10;
num/=10;
first_digit=num%10;

//Code to calculate the output

int sum_of_digits,reverse_number;
sum_of_digits=first_digit+second_digit+third_digit+fourth_digit;
reverse_number=1000*fourth_digit+100*third_digit+10*second_digit+1*first_digit;

//Code to display the output

cout<<"\nSum of the digits = "<<sum_of_digits;
cout<<"\nReverse number = "<<reverse_number;

return 0;
}