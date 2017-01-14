//Lab Exercise 10.10
/*Program to convert a string to upper case*/
//Anuj Saharan

#include <iostream.h>

int main()
{
char str[100];
cout<<"Enter a string: ";
gets(str); //Obtains the input

unsigned string_length;
for(string_length=0;str[string_length]!='\0';string_length++); //Obtains the length of the string

for(unsigned int index=0;index<string_length;index++) //Obtains the output
    {
    if((str[index]>='a')&&(str[index]<='z')) {str[index]-=32;}
    }
cout<<"The string in lower case: ";
puts(str); //Displays the output

return 0;
}