//Lab Exercise 1.5
/*Program to calculate the Lateral Surface Area, Total Surface Area and Volume of a cone with user defined radius and height*/
//Anuj Saharan

#include <iostream.h>
#include <math.h>

int main()
{
float radius,lateral_surface_area,total_surface_area,volume,perpendicular_length,height;

//Code to obtain the input

cout<<"Enter the radius of the cone: ";
cin>>radius;
cout<<"Enter the height of the cone: ";
cin>>height;

//Code to calculate the output

perpendicular_length=sqrt(radius*radius+height*height);
lateral_surface_area=(3.14*radius*perpendicular_length);
total_surface_area=(3.14*radius*(perpendicular_length+radius));
volume=((3.14*radius*radius*height)/3);

//Code to display the output

cout<<"\nTotal Surface Area of the Cone= "<<total_surface_area<<" square units";
cout<<"\nLateral Surface Area of the Cone = "<<lateral_surface_area<<" square units";
cout<<"\nVolume of the Cone= "<<volume<<" cubic units";

return 0;
}