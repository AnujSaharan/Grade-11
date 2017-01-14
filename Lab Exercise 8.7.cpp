//Lab Exercise 8.7
/*Menu driven program to allow the user to perform arithmetic operations*/
//Anuj Saharan

#include <iostream.h>
#include <process.h>

double sum(double num1,double num2) //Adds the two numbers
{
return num1+num2;
}

double difference(double num1,double num2) //Subtracts the two numbers
{
return num1-num2;
}

double product(double num1,double num2) //Multiplies the two numbers
{
return num1*num2;
}

double quotient(double num1,double num2) //Divides the two numbers
{
return num1/num2;
}

int main() //Main Function
{
unsigned int selector;
do //Displays the menu
    {
    cout<<"1.Enter the two numbers\n2.Add the two numbers\n3.Subtract the two numbers\n4.Multiply the two numbers\n5.Divide the two numbers\n6.Exit\n\n";
    cout<<"Enter the number corresponding to your desired option: ";

    int num1,num2;

    cin>>selector;
    switch (selector) //Switch to display the output
        {
        case 1: {cout<<endl<<"Enter the first number: "; cin>>num1; cout<<"Enter the second number: "; cin>>num2; cout<<endl; break;}
        case 2: {cout<<"\nThe Sum of the Two Numbers is: "<<sum(num1,num2)<<endl; break;}
        case 3: {cout<<"\nThe Difference of the Two Numbers is: "<<difference(num1,num2)<<endl; break;}
        case 4: {cout<<"\nThe Product of the Two Numbers is: "<<product(num1,num2)<<endl; break;}
        case 5: {cout<<"\nThe Quotient of the Two Numbers is: "<<quotient(num1,num2)<<endl; break;}
        }
    }
while(selector!=6);

if(selector==6) {exit(1);}

return 0;
}