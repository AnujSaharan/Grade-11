//Lab Exercise 8.3
/*Program to display all prime numbers between two given numbers*/
//Anuj Saharan

#include <iostream.h>

void Prime_Numbers(unsigned int number_1,unsigned int number_2) //Displays all prime numbers between two given numbers
{
for(unsigned int num_index=num1+1;num_index<num2;num_index++)
    {
    if(num_index==2) {cout<<"2 "; continue;}

    unsigned int prime_flag=0; //Flag to check if a number is prime
    for(unsigned int prime_check_index=2;prime_check_index<num_index;prime_check_index++)
        {
        if(num_index%prime_check_index==0) {prime_flag=0; break;}
        else {prime_flag=1;} //Flag is changed to 1 if a number is prime
        }
    if(prime_flag==1) {cout<<num_index<<" ";} //Displays a number if it is prime
    }
}

int main() //Main Function
{
unsigned int num1,num2;
cout<<"Enter two numbers: ";
cin>>num1>>num2; //Obtains input from user

Prime_Numbers(num1,num2);

return 0;
}