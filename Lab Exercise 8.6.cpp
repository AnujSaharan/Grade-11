//Lab Exercise 8.6
/*Program to swap two numbers using a function*/
//Anuj Saharan

#include <iostream.h>

void numbers_swap(int &number_1,int &number_2)
{
int temp=number_2;
number_2=number_1;
number_1=temp;
}

int main() //Main Function
{
int number_1,number_2;
cout<<"Enter two numbers: ";
cin>>number_1>>number_2; //Obtains the input

cout<<"\nBEFORE SWAPPING\n";
cout<<"First Number: "<<number_1<<endl<<"Second Number: "<<number_2<<endl; //Displays the numbers before swapping

numbers_swap(number_1,number_2); //Passes the two numbers as arguments

cout<<"\nAFTER SWAPPING\n";
cout<<"First Number: "<<number_1<<endl<<"Second Number: "<<number_2; //Displays the numbers after swapping

return 0;
}