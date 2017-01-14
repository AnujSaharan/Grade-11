//Lab Exercise 5.4
/*Program to display the user's favourite sport*/
//Anuj Saharan

#include <iostream.h>

int main()
{
unsigned int user_selection;

//Code to display the menu and obtain the input

cout<<"\n1.Cricket \n2.Football \n3.Basketball \n4.Volleyball \n5.Rugby \n";
cout<<"\nEnter the number corresponding to your favourite sport: ";
cin>>user_selection;

//Switch statement to display output

switch(user_selection)
    {
    case 1: cout<<"You selected Cricket"; break;
    case 2: cout<<"You selected Football"; break;
    case 3: cout<<"You selected Basketball"; break;
    case 4: cout<<"You selected Volleyball"; break;
    case 5: cout<<"You selected Rugby"; break;
    default: cout<<"That is not a valid selection";
    }
return 0;
}