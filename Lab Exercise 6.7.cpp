// Lab Exercise 6.7
/*Program to check if a number is prime or not*/
//Anuj Saharan

#include<iostream.h>

int main()
{
//Code to obtain the input

unsigned int number_input;
cout<<"Enter a number: ";
cin>>number_input;

unsigned int counter=0;
for(unsigned int index=2;index<=number_input/2;index++) //Loop to validate the output
    {
    if(number_input%index==0)
        {
        counter++;
        }
    }

//Code to display the output

if(counter==0&&number_input!=1)
    {
    cout<<number_input<<" is a prime number";
    }
else
    {
    cout<<number_input<<" is not a prime number";
    }
return 0;
}