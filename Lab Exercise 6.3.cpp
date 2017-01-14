//Lab Exercise 6.3
/*Program to find the x factorial*/
//Anuj Saharan

#include <iostream.h>

int main()
{
//Code to obtain the input

unsigned int number_input;
cout<<"Enter a number: ";
cin>>number_input; 

unsigned int index=1,factorial=1;

while(index<=number_input) //Calculates the output
    {
    factorial*=index;
    index++;
    }
cout<<number_input<<"!= "<<factorial; //Displays the output

return 0;
}