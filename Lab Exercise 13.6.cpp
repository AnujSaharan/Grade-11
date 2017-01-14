//Lab Exercise 13.6
/*Program to store and multiply two fractions in a structure*/
//Anuj Saharan

#include <iostream.h>

struct fraction
{
int numerator;
int denominator;
} fraction_1,fraction_2;

void fraction_input(struct fraction &fraction_x) //Obtains the input
{
cout<<"Numerator: ";
cin>>fraction_x.numerator;
cout<<"Denominator: ";
cin>>fraction_x.denominator;
}

void fraction_product(struct fraction fraction_1,struct fraction fraction_2) //Displays the output
{
float numerator_product=fraction_1.numerator*fraction_2.numerator;
float denominator_product=fraction_2.denominator*fraction_2.denominator;

cout<<"\nResult: "<<(float)numerator_product/denominator_product;
}

int main()
{
cout<<"Fraction 1:\n";
fraction_input(fraction_1);

cout<<"\nFraction 2:\n";
fraction_input(fraction_2);

fraction_product(fraction_1,fraction_2);

return 0;
}