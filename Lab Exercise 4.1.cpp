//Lab Exercise 4.1
/*Program to check if a number is odd or even*/
//Anuj Saharan

#include <iostream.h>

int main()
{
int number_input;
cout<<"Enter a number: ";
cin>>number_input;

if(number_input%2==0) {cout<<number_input<<" is even";}
else {cout<<number_input<<" is odd";}

return 0;
}