//Lab Exercise 8.9
/*Program to convert a letter to upper case*/
//Anuj Saharan

#include <iostream.h>
#include <ctype.h>

int main()
{
char input;
cout<<"Enter a letter: ";
cin>>input; //Obtains the input

input=toupper(input); //Converts the input to upper case
cout<<input; //Displays the output

return 0;
}