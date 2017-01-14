//Lab Exercise 6.2
/*Program to print the first 10 natural numbers and their sum*/
//Anuj Saharan

#include <iostream.h>

int main()
{
unsigned int total_sum=0;

//Loop to display the numbers and their sum

for(unsigned int number=1;number<=10;number++) //Calculates the output
    {
    cout<<number<<endl;
    total_sum+=number;
    }

cout<<"\nThe sum of the first 10 natural numbers is: "<<total_sum; //Displays the output

return 0;
}