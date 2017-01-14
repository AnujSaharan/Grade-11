//Lab Exercise 2.3
/*Program to convert total days to years, months and days*/
//Anuj Saharan

#include <iostream.h>

int main()
{
unsigned int total_days;

//Code to obtain the input

cout<<"Enter the total number of days: ";
cin>>total_days;

//Code to calculate the output

unsigned int years,months,days;
years=(total_days/365);
months=(total_days%365)/30;
days=(total_days%365)%30;

//Code to display output

cout<<"\n"<<total_days<<" days is equal to ";
cout<<years;
(years==1)?cout<<" year ":cout<<" years ";
cout<<months;
(months==1)?cout<<" month ":cout<<" months ";
cout<<"and "<<days;
(days==1)?cout<<" day ":cout<<" days ";

return 0;
}