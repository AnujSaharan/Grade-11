//Lab Exercise 4.4
/*Program to check if the input is a letter, a number or a special character*/
//Anuj Saharan

#include <iostream.h>

int main()
{
//Code to obtain the input

char input;
cout<<"Enter any character: ";
cin>>input;

//Code to display the output

if((input>=48)&&(input<=57)) {cout<<"It is a number";}
else if((input>=65)&&(input<=122)) {cout<<"It is an alphabet";}
else {cout<<"It is a special character";}

return 0;
}