//Lab Exercise 10.5
/*Program to check two strings for equality*/
//Anuj Saharan

#include <iostream.h>
#include <stdio.h>

int main()
{
//Obtains the input

char str_1[100];
cout<<"Enter the first string: ";
gets(str_1);

char str_2[100];
cout<<"Enter the second string: ";
gets(str_2);

unsigned int string_length_1=0,string_length_2=0;
for(string_length_1;str_1[string_length_1]!='\0';string_length_1++); //Obtains the length of the first string
for(string_length_2;str_2[string_length_2]!='\0';string_length_2++); //Obtains the length of the second string

//Code to display the output

if(string_length_1!=string_length_2) {cout<<"\nThe strings are not equal";}

else
    {
    unsigned int unequal_flag=0;
    for(unsigned int index=0;index<string_length_1;index++)
        {
        if(str_1[index]!=str_2[index])
            {
            cout<<"\nThe strings are not equal";
            unequal_flag=1;
            break;
            }
        }
    if(unequal_flag==0) {cout<<"\nThe strings are equal";}
    }
return 0;
}