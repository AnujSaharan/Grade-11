//Lab Exercise 13.1
/*Program to store hours,minutes and seconds in a structure*/
//Anuj Saharan

#include <iostream.h>

struct time
{
unsigned int hours,minutes,seconds;
} t1={0,0,0},t2,t3;

void time_input(struct time &time_structure) //Obtains the input
{
cout<<"Hours: ";
cin>>time_structure.hours;
cout<<"Minutes: ";
cin>>time_structure.minutes;
cout<<"Seconds: ";
cin>>time_structure.seconds;
}

void time_output(struct time time_structure) //Obtains the output
{
cout<<"Hours: "<<time_structure.hours<<"\nMinutes: "<<time_structure.minutes<<"\nSeconds: "<<time_structure.seconds<<"\n\n";
}

int main()
{
t2=t1;

cout<<"Values stored in T1:\n";
time_output(t1);

cout<<"Values stored in T2:\n";
time_output(t2);

//Code to obtain the input

cout<<"Enter new values for T1:\n";
time_input(t1);
cout<<"\nEnter new values for T2:\n";
time_input(t2);

//Code to display the output

cout<<"\nNew values stored in T1:\n";
time_output(t1);
cout<<"New Values stored in T2:\n";
time_output(t2);

t3.hours=(t1.hours+t2.hours);

if(t1.minutes+t2.minutes>=60) {t3.hours=(t1.minutes+t2.minutes)/60;}
t3.minutes+=(t1.minutes+t2.minutes)%60;

if(t1.seconds+t2.seconds>=60) {t3.minutes=(t1.seconds+t2.seconds)/60;}
t3.seconds+=(t1.seconds+t2.seconds)%60;

cout<<"\nValues stored in T3:"<<endl;
time_output(t3);

return 0;
}