//Lab Exercise 5.2
/*Program to display the name of a month corresponding to its number*/
//Anuj Saharan

#include <iostream.h>

int main()
{
unsigned int month_number;

//Code to obtain the input

cout<<"Enter a month number: ";
cin>>month_number;

//Switch statement to display the output

switch(month_number)
    {
    case 1: cout<<"January"; break;
    case 2: cout<<"February"; break;
    case 3: cout<<"March"; break;
    case 4: cout<<"April"; break;
    case 5: cout<<"May"; break;
    case 6: cout<<"June"; break;
    case 7: cout<<"July"; break;
    case 8: cout<<"August"; break;
    case 9: cout<<"September"; break;
    case 10: cout<<"October"; break;
    case 11: cout<<"November"; break;
    case 12: cout<<"December"; break;
    default: cout<<"That is not a valid input";
    }
return 0;
}