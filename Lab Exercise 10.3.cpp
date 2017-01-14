//Lab Exercise 10.3
/*Program to count the number of words in a string*/
//Anuj Saharan

#include <iostream.h>
#include <stdio.h>

int main()
{
char str[100];
cout<<"Enter a string: ";
gets(str); //Obtains the input

unsigned int number_of_words=1;
for(unsigned int index=0;str[index]!='\0';index++)
    {
    if(str[index]==' ') {number_of_words++;}
    }

cout<<"The number of words in the string is: "<<number_of_words; //Displays the output

return 0;
}