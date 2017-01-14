//Lab Exercise 2.5
/*Program to divide total money to various denominations*/
//Anuj Saharan

#include <iostream.h>

int main()
{
unsigned int total_money,five_hundred,hundred,fifty,twenty,ten,five,one;

//Code to obtain the input

cout<<"Enter the total amount of money: ";
cin>>total_money;

//Code for calculating the output

five_hundred=total_money/500;
total_money%=500;
hundred=total_money/100;
total_money%=100;
fifty=total_money/50;
total_money%=50;
twenty=total_money/20;
total_money%=20;
ten=total_money/10;
total_money%=10;
five=total_money/5;
total_money%=5;
one=total_money;

//Code to display the output

cout<<"\nRs.500: "<<five_hundred<<"\nRs.100: "<<hundred<<"\nRs.50: "<<fifty<<"\nRs.20: "<<twenty<<"\nRs.10: "<<ten<<"\nRs.5: "<<five<<"\nRs.1: "<<one;
return 0;
}