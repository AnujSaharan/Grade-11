//Lab Exercise 10.4
/*Program to concatenate two strings*/
//Anuj Saharan

#include <iostream.h>
#include <stdio.h>

int main()
{
//Code to obtain the input

char str_1[100];
cout<<"Enter the first string: ";
gets(str_1);

char str_2[100];
cout<<"Enter the second string: ";
gets(str_2);

unsigned int string_length_1=0;
for(string_length_1;str_1[string_length_1]!='\0';string_length_1++);

for(unsigned int string_length_2=0;str_2[string_length_2]!='\0';string_length_2++)
    {
    str_1[string_length_1++]=str_2[string_length_2];
    }

cout<<"The concatenated string is: ";
puts(str_1); //Displays the output

return 0;
}