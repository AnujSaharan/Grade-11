//Lab Exercise 8.8
/*Program to check whether the input is an alphabet,a number or a special character*/
//Anuj Saharan

#include <iostream.h>
#include <ctype.h>

int main()
{
char input;
cout<<"Enter the input: ";
cin>>input; //Obtains the input

//Code to display the output

if(isalpha(input)) {cout<<"It is an alphabet";}
else if(isdigit(input)) {cout<<"It is a number";}
else {cout<<"It is a special character";}

return 0;
}