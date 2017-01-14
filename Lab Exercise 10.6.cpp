//Lab Exercise 10.6
/*Program to check if a string is a palindrome*/
//Anuj Saharan

#include <iostream.h>
#include <stdio.h>

int main()
{
char str[100];
cout<<"Enter a string: ";
gets(str); //Obtains the input

unsigned int string_length=0;
for(string_length;str[string_length]!='\0';string_length++); //Gets the length of the string

unsigned int unequal_flag=0;
for(unsigned int check_index=0;check_index<string_length/2;check_index++) //Validates the output
    {
    if(str[check_index]!=str[string_length-check_index-1])
        {
        unequal_flag=1;
        break;
        }
    }

//Code to display the output

if(unequal_flag==0) {cout<<"\nThe string is a palindrome";}
else {cout<<"\nThe string is not a palindrome";}

return 0;
}