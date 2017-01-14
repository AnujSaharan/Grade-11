//Lab Exercise 13.2
/*Program to store Cartesian coordinates in a structure*/
//Anuj Saharan

#include <iostream.h>
#include <math.h>

struct point
{
int x_coordinate,y_coordinate;
} p1={0,0},p2;

void coordinate_input(struct point &coordinate) //Obtains the input
{
cout<<"X: ";
cin>>coordinate.x_coordinate;
cout<<"Y: ";
cin>>coordinate.y_coordinate;
}

void coordinate_output(struct point coordinate) //Displays the output
{
cout<<"X: "<<coordinate.x_coordinate;
cout<<"\nY: "<<coordinate.y_coordinate;
}

float distance_between_points(struct point p1,struct point p2) //Calculates the distance between two points
{
unsigned int distance=sqrt(pow(p2.x_coordinate-p1.x_coordinate,2)-pow(p2.y_coordinate-p1.y_coordinate,2));
return distance;
}

int main()
{
p2=p1;

cout<<"Values stored in P1:\n";
coordinate_output(p1);
cout<<"\n\nValues stored in P2:\n";
coordinate_output(p2);

//Code to obtain the input

cout<<"\n\nEnter new values for P1:\n";
coordinate_input(p1);
cout<<"\nEnter new values for P2:\n";
coordinate_input(p2);

//Code to display the output

cout<<"\nNew values stored in P1:\n";
coordinate_output(p1);
cout<<"\n\nNew values stored in P2:\n";
coordinate_output(p2);

cout<<"\n\nThe distance between ("<<p1.x_coordinate<<","<<p1.y_coordinate<<") and ("<<p2.x_coordinate<<","<<p2.y_coordinate<<") is: ";
cout<<distance_between_points(p1,p2)<<" units";

return 0;
}