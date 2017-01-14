//Lab Exercise 3.4
/*Program to display a grade based on a student's marks*/
//Anuj Saharan

#include <iostream.h>

int main()
{
int marks;

//Code to obtain the input

cout<<"Enter your marks: ";
cin>>marks;

//Code to display the output

(marks>=91)?cout<<"The grade corresponding to "<<marks<<" is A1":
(marks>=81)?cout<<"The grade corresponding to "<<marks<<" is A2":
(marks>=71)?cout<<"The grade corresponding to "<<marks<<" is B1":
(marks>=61)?cout<<"The grade corresponding to "<<marks<<" is B2":
(marks>=51)?cout<<"The grade corresponding to "<<marks<<" is C1":
(marks>=41)?cout<<"The grade corresponding to "<<marks<<" is C2":
(marks>=31)?cout<<"The grade corresponding to "<<marks<<" is D":
(marks>=21)?cout<<"The grade corresponding to "<<marks<<" is D":
(marks>=11)?cout<<"The grade corresponding to "<<marks<<" is E":
(marks>=0)?cout<<"The grade corresponding to "<<marks<<" is F":cout<<"";

return 0;
}