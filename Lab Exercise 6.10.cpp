//Lab Exercise 6.10
/*Program to print all Armstrong numbers between 1 and 500*/
//Anuj Saharan

#include <iostream.h>

int main()
{
unsigned int digit,sum,number;

//Code to display the output

cout<<"Armstrong numbers between 1 and 500: ";
for(unsigned int index=1;index<=500;index++)
    {
    number=index;
    sum=0;

    while(number>0)
        {
        digit=number%10;
        sum+=(digit*digit*digit);
        number/=10;
        }
    if(sum==index)
        {
        cout<<index<<" ";
        }
    }
return 0;
}