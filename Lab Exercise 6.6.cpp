//Lab Exercise 6.6
/*Program to find the sum of all digits of a number*/
//Anuj Saharan

#include <iostream.h>

int main()
{
//Code to obtain the input

int number_input,total_sum=0;
cout<<"Enter a number: ";
cin>>number_input;

while(number_input!=0) //Calculates the output
    {
    total_sum+=number_input%10;
    number_input/=10;
    }
cout<<"The sum of the digits is: "<<total_sum; //Displays the output

return 0;
}