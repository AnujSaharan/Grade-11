//Lab Exercise 1.4
/*Program to calculate the Lateral Surface Area, Total Surface Area and Volume of a cuboid with user defined dimensions*/
//Anuj Saharan

#include <iostream.h>

int main()
{
//Code to obtain the input

float length=0,breadth=0,height=0;
cout<<"Enter the Length of the Cuboid: ";
cin>>length;
cout<<"Enter the Breadth of the Cuboid: ";
cin>>breadth;
cout<<"Enter the Height of the Cuboid: ";
cin>>height;

//Code to calculate the output

float lateral_surface_area,total_surface_area,volume;
lateral_surface_area=(2*height*(length+breadth));
volume=(length*breadth*height);
total_surface_area=(2*(length*breadth+breadth*height+height*length));

//Code to display the output

cout<<"\nTotal Surface Area of the Cuboid = "<<total_surface_area<<" square units";
cout<<"\nLateral Surface Area of the Cuboid = "<<lateral_surface_area<<" square units";
cout<<"\nVolume of the Cuboid = "<<volume<<" cubic units";

return 0;
}