//Lab Exercise 1.8
/*Program to calculate simple and compound interest*/
//Anuj Saharan

#include <iostream.h>
#include <math.h>

int main()
{
float principle_amount,rate,time_period;

//Code to obtain the input

cout<<"Enter the Principle Amount: ";
cin>>principle_amount;
cout<<"Enter the Rate of Interest: ";
cin>>rate;
cout<<"Enter the Time Period of Interest: ";
cin>>time_period;

//Code to calculate and display the output

cout<<"\nSimple Interest = "<<((principle_amount*rate*time_period)/100);
cout<<"\nCompound Interest = "<<(principle_amount*(pow(1+(rate/100),time_period)));

return 0;
}