//Lab Exercise 5.1
/*Program to display a day number corresponding to its number*/
//Anuj Saharan

#include <iostream.h>

int main()
{
//Code to obtain the input

unsigned int day_number;
cout<<"Enter a day number: ";
cin>>day_number;

//Switch to display the output

switch(day_number)
    {
    case 1: cout<<"Monday"; break;
    case 2: cout<<"Tuesday"; break;
    case 3: cout<<"Wednesday"; break;
    case 4: cout<<"Thursday"; break;
    case 5: cout<<"Friday"; break;
    case 6: cout<<"Saturday"; break;
    case 7: cout<<"Sunday"; break;
    default: cout<<"That is not a valid input";
    }
return 0;
}