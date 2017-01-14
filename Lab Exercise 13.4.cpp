//Lab Exercise 13.4
/*Program to store a complex number in a structure*/
//Anuj Saharan

#include <iostream.h>

struct complex_number
{
float real_part;
float imaginary_part;
} z1={0,0},z2={0,0},z3={0,0};

struct complex_number addition(struct complex_number z1,struct complex_number z2) //Adds two complex numbers
{
struct complex_number z3;
z3.real_part=z1.real_part+z2.real_part;
z3.imaginary_part=z1.imaginary_part+z1.imaginary_part;
cout<<"\nSum: "<<z3.real_part<<"+("<<z3.imaginary_part<<")i";
return z3;
};

struct complex_number subtraction(struct complex_number z1,struct complex_number z2) //Subtracts two complex numbers
{
struct complex_number z3;
z3.real_part=z1.real_part-z2.real_part;
z3.imaginary_part=z1.imaginary_part-z1.imaginary_part;
cout<<"\nDifference: "<<z3.real_part<<"+("<<z3.imaginary_part<<")i";
return z3;
};

struct complex_number product(struct complex_number z1,struct complex_number z2) //Multiplies two complex numbers
{
struct complex_number z3;
z3.real_part=z1.real_part*z2.real_part;
z3.imaginary_part=z1.imaginary_part*z1.imaginary_part;
cout<<"\nProduct: "<<z3.real_part<<"+("<<z3.imaginary_part<<")i";
return z3;
};

struct complex_number quotient(struct complex_number z1,struct complex_number z2) //Divides two complex numbers
{
struct complex_number z3;
z3.real_part=z1.real_part/z2.real_part;
z3.imaginary_part=z1.imaginary_part/z1.imaginary_part;
cout<<"\nDivision: "<<z3.real_part<<"+("<<z3.imaginary_part<<")i";
return z3;
};

void complex_number_input(struct complex_number &z) //Obtains the input
{
cout<<"Real part: ";
cin>>z.real_part;
cout<<"Imaginary part: ";
cin>>z.imaginary_part;
}

void complex_number_output(struct complex_number &z) //Displays the output
{
cout<<"\nReal part: "<<z.real_part;
cout<<"\nImaginary part: "<<z.imaginary_part;
}

int main()
{
//Code to obtain input

cout<<"Enter the first complex number:\n";
complex_number_input(z1);
cout<<"\nEnter the second complex number:\n";
complex_number_input(z2);

//Code to display output

addition(z1,z2);
subtraction(z1,z2);
product(z1,z2);
quotient(z1,z2);

return 0;
}