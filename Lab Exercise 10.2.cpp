//Lab Exercise 10.2
/*Program to display a string backwards*/
//Anuj Saharan

#include <iostream.h>
#include <stdio.h>

int main()
{
char str[100];
cout<<"Enter a string: ";
gets(str); //Obtains the input

unsigned int string_length=0;
for(int index=0;str[index]!='\0';index++)
    {
    string_length++;
    }

cout<<"The string when reversed is: ";
for(unsigned int reverse_index=string_length;reverse_index>=0;reverse_index--) //Displays the output
    {
    if(reverse_index==-1) {break;}
    cout<<str[reverse_index];
    }
return 0;
}