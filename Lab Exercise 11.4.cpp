//Lab Exercise 11.4
/*Program to check if a string is a palindrome*/
//Anuj Saharan

#include <iostream.h>

int is_palindrome(char str[])
{
unsigned int string_length;
for(string_length=0;str[string_length]!='\0';string_length++); //Obtains the length of the string

for(unsigned int index=0;index<(string_length/2);index++)
    {
    if(str[index]!=str[string_length-index-1]) {return 0;}
    }
return 1;
}

int main()
{
char str[100];
cout<<"Enter a string: ";
gets(str); //Obtains the input

//Code to display the output

if(is_palindrome(str)==1) {cout<<"\nIt is a palindrome";}
else {cout<<"\nIt is not a palindrome";}

return 0;
}