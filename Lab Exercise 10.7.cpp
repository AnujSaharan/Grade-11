//Lab Exercise 10.7
/*Program to check if a sub-string exists in a given string*/
//Anuj Saharan

#include <iostream.h>

int main()
{
char str[80], sub_str[80];

//Code to obtain the input

cout<<"Enter the parent string: ";
gets(str);

cout<<"Enter the sub-string: ";
gets(sub_str);

unsigned int sub_string_length;
for(sub_string_length=0;sub_str[sub_string_length]!='\0';sub_string_length++);

unsigned int str_index,sub_str_index;
for(str_index=0,sub_str_index=0;str[str_index]!='\0'&&sub_str[sub_str_index]!='\0';str_index++) //Validates the output
    {
    if(str[str_index]==sub_str[sub_str_index]) {sub_str_index++;}
    else {sub_str_index=0;}
    }

//Code to display the output

if(sub_str_index==sub_string_length) {cout<<"\nSub-string found starting at character number "<<((str_index-sub_str_index)+1);}
else {cout<<"\nThe sub-string was not found in the parent string";}

return 0;
}