//Lab Exercise 6.12
/*Program to find the sum of the series 1/1+1/2+...1/n*/
//Anuj Saharan

#include <iostream.h>

int main()
{

unsigned int number_of_terms;
double total_sum=0;

//Code to obtain the input

cout<<"Enter the number of terms: ";
cin>>number_of_terms;

for(unsigned int index=1;index<=number_of_terms;index++) //Calculates the output
    {
    total_sum+=(1.0/index);
    }
cout<<"Sum of the series up to "<<number_of_terms<<" terms is: "<<total_sum;

return 0;
}