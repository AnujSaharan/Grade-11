//Lab Exercise 4.5
/*Roots of a Quadratic Equation*/
//Anuj Saharan

#include <iostream.h>
#include <math.h>

int main()
{
//Code to obtain the input

double a,b,c,discriminant,alpha,beta;

cout<<"Enter a: ";
cin>>a;
cout<<"Enter b: ";
cin>>b;
cout<<"Enter c: ";
cin>>c;

//Code to calculate and display the output

discriminant=(b*b)-(4*a*c);

if(discriminant==0)
    {
    alpha=(-b)/(2*a);
    cout<<"\nThe roots are real and equal\n";
    }
else if(discriminant>0)
    {
    alpha=-(b+sqrt(discriminant))/(2*a);
    beta=-(b-sqrt(discriminant))/(2*a);
    cout<<"\nThe roots are real & distinct\n";
    }
else
    {
    alpha=-(b+sqrt(discriminant))/(2*a);
    beta=-(b+sqrt(discriminant))/(2*a);
    cout<<"\nThe roots are imaginary\n";
    }

cout<<"Alpha = "<<alpha<<"\n"<<"Beta = "<<beta;

return 0;
}