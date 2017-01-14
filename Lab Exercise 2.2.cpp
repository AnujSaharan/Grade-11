//Lab Exercise 2.2
/*Program to convert total seconds to hours, minutes and seconds*/
//Anuj Saharan

#include <iostream.h>

int main()
{
unsigned int total_seconds;

//Code to obtain the input

cout<<"Enter the total time in seconds: ";
cin>>total_seconds;

//Code to calculate the output

unsigned int hours,minutes,seconds;
hours=(total_seconds/3600);
minutes=(total_seconds%3600)/60;
seconds=(total_seconds%60);

//Code to display the output

cout<<"\n"<<total_seconds<<" seconds is equal to ";

cout<<hours;
(hours==1)?cout<<" hour ":cout<<" hours ";

cout<<minutes;
(minutes==1)?cout<<" minute ":cout<<" minutes ";

cout<<"and "<<seconds;
(seconds==1)?cout<<" second ":cout<<" seconds ";

return 0;
}