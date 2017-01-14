//Lab Exercise 6.11
/*Program to display the Fibonacci series up to 'N' terms*/
//Anuj Saharan

#include <iostream.h>

int main()
{
//Code to obtain the input

unsigned int number_of_terms,first_term=1,second_term=1,next_term;
cout<<"Enter number of terms: ";
cin>>number_of_terms;
cout<<"Fibonacci Series: "<<" "<<first_term<<" "<<second_term; //Displays the first two terms

for(unsigned int index=1;index<=number_of_terms-2;index++) //Calculates and displays the subsequent terms
    {
    next_term =first_term+second_term;
    cout<<" "<<next_term<<" ";
    first_term=second_term;
    second_term=next_term;
    }
return 0;
}