//Lab Exercise 4.3
/*Program to calculate the profit or loss incurred*/
//Anuj Saharan

#include <iostream.h>

int main()
{
int cost_price,selling_price,profit;

//Code to obtain the input

cout<<"Enter the cost price: ";
cin>>cost_price;
cout<<"Enter the selling price: ";
cin>>selling_price;
profit=selling_price-cost_price;

//Code to display the output

if(profit>0) {cout<<"\nYou have incurred a profit of Rs."<<profit;}
else if(profit<0) {cout<<"\nYou have incurred a loss of Rs."<<(-profit);}
else {cout<<"\nNo profit or loss has been incurred";}

return 0;
}