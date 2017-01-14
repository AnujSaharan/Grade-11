//Lab Exercise 11.5
/*Program to count the number of vowels in a string*/
//Anuj Saharan

#include <iostream.h>

int vowel_counter(char str[])
{
unsigned int string_length;
for(string_length=0;str[string_length]!='\0';string_length++); //Obtains the length of the string

unsigned int number_of_vowels=0;
for(unsigned int index=0;index<string_length;index++) //Obtains the output
    {
    str[index]=toupper(str[index]);

    if((str[index]=='A')||(str[index]=='E')||(str[index]=='I')||(str[index]=='O')||(str[index]=='U'))
        {
        number_of_vowels++;
        }
    }
return number_of_vowels;
}

int main()
{
char str[100];
cout<<"Enter a string: ";
gets(str); //Obtains the input

cout<<"The number of vowels in the string is: "<<vowel_counter(str); //Displays the output

return 0;
}