//Lab Exercise 13.8
/*Program to store and use Cartesian coordinates in a structure*/
//Anuj Saharan

#include <iostream.h>
#include <math.h>

struct point
{
int x_coordinate,y_coordinate;
};

void coordinate_input(struct point &coordinate) //Obtains the input
{
cout<<"\nX: ";
cin>>coordinate.x_coordinate;
cout<<"Y: ";
cin>>coordinate.y_coordinate;
}

void coordinate_output(struct point coordinate) //Displays the output
{
cout<<"\nX: "<<coordinate.x_coordinate;
cout<<"\nY: "<<coordinate.y_coordinate<<"\n";
}

float distance_between_points(struct point p1,struct point p2) //Calculates the distance between two points
{
unsigned int distance=sqrt(pow(p2.x_coordinate-p1.x_coordinate,2)-pow(p2.y_coordinate-p1.y_coordinate,2));
return distance;
}

int main()
{
point point_arr[3];

for(unsigned int input_index=0;input_index<3;input_index++)
    {
    cout<<"Point #"<<(input_index+1);
    coordinate_input(point_arr[input_index]);
    cout<<"\n";
    }

for(unsigned int output_index=0;output_index<3;output_index++)
    {
    cout<<"Point #"<<(output_index+1);
    coordinate_output(point_arr[output_index]);
    cout<<"\n";
    }

cout<<"\n\nThe distance between ("<<point_arr[0].x_coordinate<<","<<point_arr[0].y_coordinate<<") and ("<<point_arr[1].x_coordinate<<","<<point_arr[1].y_coordinate<<") is: ";
unsigned int length_1=distance_between_points(point_arr[0],point_arr[1]);
cout<<length_1<<" units";

cout<<"\nThe distance between ("<<point_arr[1].x_coordinate<<","<<point_arr[1].y_coordinate<<") and ("<<point_arr[2].x_coordinate<<","<<point_arr[2].y_coordinate<<") is: ";
unsigned length_2=distance_between_points(point_arr[1],point_arr[2]);
cout<<length_2<<" units";

cout<<"\nThe distance between ("<<point_arr[0].x_coordinate<<","<<point_arr[2].y_coordinate<<") and ("<<point_arr[0].x_coordinate<<","<<point_arr[2].y_coordinate<<") is: ";
unsigned length_3=distance_between_points(point_arr[1],point_arr[2]);
cout<<length_3<<" units";

if((length_1+length_2>length_3)&&(length_2+length_3>length_1)&&(length_1+length_3>length_2)) {cout<<"\nThe points will form a triangle";}
else {cout<<"\nThe points will not form a triangle";}

return 0;
}