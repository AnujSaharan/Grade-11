//Lab Exercise 8.2
/*Program to display the total number of permutations and combinations of 'N' things taken 'R' at a time*/
//Anuj Saharan

#include <iostream.h>

unsigned long factorial(unsigned long input_num) //Calculates 'x' factorial
{
unsigned long factorial_product=1;
for(unsigned long factorial_index=input_num;factorial_index>0;factorial_index--)
    {
    factorial_product*=factorial_index;
    }
return factorial_product;
}

int main() //Main Function
{
unsigned long n,r;

//Code to obtain the input

cout<<"Enter N: ";
cin>>n;
cout<<"Enter R: ";
cin>>r;

cout<<"\nThe total number of permutations is: "<<(factorial(n)/(factorial(n-r))); //Displays the total number of permutations
cout<<"\nThe total number of combinations is: "<<(factorial(n)/(factorial(n-r)*factorial(r))); //Displays the total number of combinations

return 0;
}