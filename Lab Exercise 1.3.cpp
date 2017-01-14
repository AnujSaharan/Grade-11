//Lab Exercise 1.3
/*Program to convert temperature from Celsius to Fahrenheit and vice versa*/
//Anuj Saharan

#include <iostream.h>

int main()
{
//Code to convert Temperature from Fahrenheit to Celsius

float fahrenheit,celsius;
cout<< "Enter the Temperature in Fahrenheit: ";
cin>>fahrenheit; //Obtains the input
celsius=(5*(fahrenheit-32)/9); //Calculates the output
cout<<"The Temperature in Celsius is: "<<celsius<<"C\n\n"; //Displays the output

//Code to convert Temperature from Celsius to Fahrenheit

cout<<"Enter the Temperature in Celsius: ";
cin>>celsius; //Obtains the input
fahrenheit=(9*(celsius+32)/5); //Calculates the output
cout<<"The Temperature in Fahrenheit is: "<<fahrenheit<<"F"; //Displays the output

return 0;
}