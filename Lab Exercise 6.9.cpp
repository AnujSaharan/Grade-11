// Lab Exercise 6.9
/*Program to display the number of positive numbers, negative numbers and zeroes entered by the user*/
//Anuj Saharan

#include <iostream.h>

int main()
{
int number_input,positive_number_counter=0,negative_number_counter=0,zero_counter=0;
char user_choice;

do //Loop to obtain input
    {
    cout<<"Enter a number: ";
	cin>>number_input;

    if(number_input>0) {positive_number_counter++;}
    else if(number_input<0) {negative_number_counter++;}
    else {zero_counter++;}

    cout<<"Do you want to continue? [Enter Y/N] ";
	cin>>user_choice;
    }
while(user_choice=='y'||user_choice=='Y');

cout<<"Positive Numbers :"<<positive_number_counter<<"\nNegative Numbers :"<<negative_number_counter<<"\nZeroes :"<<zero_counter; //Displays the output

return 0;
}