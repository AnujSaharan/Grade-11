//Lab Exercise 10.1
/*Program to find the length of a string*/
//Anuj Saharan

#include <iostream.h>
#include <stdio.h>

int main()
{
char str[100];
cout<<"Enter a string: ";
gets(str); //Obtains the input

unsigned int string_length=0;
for(unsigned int index=0;str[index]!='\0';index++)
    {
    string_length++;
    }
cout<<"The length of the string is: "<<string_length; //Displays the output

return 0;
}