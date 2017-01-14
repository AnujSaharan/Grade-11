//Lab Exercise 13.3
/*Program to store and add time in a structure*/
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

struct time add_time(struct time time_1,struct time time_2,struct time &time_3)
{
time_3.hours=(time_1.hours+time_2.hours);

if(time_1.minutes+time_2.minutes>=60) {time_3.hours=(time_1.minutes+time_2.minutes)/60;}
time_3.minutes+=(time_1.minutes+time_2.minutes)%60;

if(time_1.seconds+time_2.seconds>=60) {time_3.minutes=(time_1.seconds+time_2.seconds)/60;}
time_3.seconds+=(time_1.seconds+time_2.seconds)%60;

return time_3;
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

add_time(t1,t2,t3);

cout<<"\nValues stored in T3:"<<endl;
time_output(t3);

return 0;
}