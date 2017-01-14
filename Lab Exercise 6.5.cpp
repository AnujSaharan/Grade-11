//Lab Exercise 6.5
/*Program to reverse a number*/
//Anuj Saharan

#include <iostream.h>

int main()
{
//Code to obtain the input

int number_input,reverse_number=0;
cout<<"Enter a number: ";
cin>>number_input;

while(number_input!=0) //Calculates the output
    {
    reverse_number*=10;
    reverse_number+=number_input%10;
    number_input/=10;
    }
cout<<"The number when reversed is: "<<reverse_number; //Displays the output

return 0;
}