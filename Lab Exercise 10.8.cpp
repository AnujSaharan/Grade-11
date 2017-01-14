//Lab Exercise 10.8
/*Program to store a reversed string*/
//Anuj Saharan

#include <iostream.h>

int main()
{
char str[100];
cout<<"Enter a string: ";
gets(str); //Obtains the input

unsigned string_length;
for(string_length=0;str[string_length]!='\0';string_length++); //Obtains the length of the string

for(unsigned int reverse_index_1=0,reverse_index_2=string_length-1;reverse_index_1<(string_length/2);reverse_index_1++,reverse_index_2--) //Obtains the output
    {
    char temp=str[reverse_index_2];
    str[reverse_index_2]=str[reverse_index_1];
    str[reverse_index_1]=temp;
    }
cout<<"Reversed string: ";
puts(str); //Displays the output

return 0;
}