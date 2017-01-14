//Lab Exercise 6.13
/*Program to find the sum of 1/1-1/2+1/3...1/n*/
//Anuj Saharan

#include <iostream.h>
int main()
{
int number_of_terms,sign=-1;
float total_sum=0;

//Code to obtain the input

cout<<"Enter the number of terms: ";
cin>>number_of_terms;

for(int index=1;index<=number_of_terms;index++) //Calculates the output
	{
	sign*=-1;
	total_sum+=(sign*(1.0/index));
	}

cout<<"The sum of the series up to "<<number_of_terms<<" terms is: "<<total_sum; //Displays the output

return 0;
}