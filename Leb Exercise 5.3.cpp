//Lab Exercise 5.3
/*Program to display the quadrant in which a given angle is present*/
//Anuj Saharan

#include <iostream.h>

int main()
{
unsigned int angle_input;

//Code to obtain the input

cout<<"Enter an angle between 0 to 360: ";
cin>>angle_input;
unsigned int quadrant=(angle_input/90)+1;

//Output for angles that lie on an axis

if (angle_input==90) {cout<<"\nThe angle lies on the positive Y axis.";}
else if (angle_input==0) {cout<<"\nThe angle lies on the positive X axis.";}
else if (angle_input==180) {cout<<"\nThe angle lies on the negative X axis.";}
else if (angle_input==270) {cout<<"\nThe angle lies on the negative Y axis.";}
else if (angle_input==360) {cout<<"\nThe angle lies on the positive X axis.";}

//Switch statement to display the output

else
    {
    switch(quadrant)
        {
        case 1: cout<<"The angle lies in the first quadrant"; break;
        case 2: cout<<"The angle lies in the second quadrant"; break;
        case 3: cout<<"The angle lies in the third quadrant"; break;
        case 4: cout<<"The angle lies in the fourth quadrant"; break;
        default: cout<<"That is not a valid angle";
        }
    }
return 0;
}