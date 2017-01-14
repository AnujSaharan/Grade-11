//Lab Exercise 13.7
/*Program to store and use the details of students in a structure*/
//Anuj Saharan

#include <iostream.h>

struct student
{
unsigned int roll_number;
char name[25];
int physics_marks;
int chemistry_marks;
int maths_marks;
};

void student_details_input(struct student &student_x) //Obtains the input
{
cout<<"Roll Number: ";
cin>>student_x.roll_number;
cout<<"Name: ";
cin>>student_x.name;
cout<<"Marks in Physics: ";
cin>>student_x.physics_marks;
cout<<"Marks in Chemistry: ";
cin>>student_x.chemistry_marks;
cout<<"Marks in Maths: ";
cin>>student_x.maths_marks;
}

void student_details_output(struct student student_x) //Displays the output
{
cout<<"\nRoll Number: "<<student_x.roll_number;
cout<<"\nName: "<<student_x.name;
cout<<"\nMarks in Physics: "<<student_x.physics_marks;
cout<<"\nMarks in Chemistry: "<<student_x.chemistry_marks;
cout<<"\nMarks in Maths: "<<student_x.maths_marks;
}

int main()
{
student student_arr[25];

for(unsigned int index=0;index<25;index++)
    {
    cout<<"Student #"<<(index+1)<<"\n";
    student_details_input(student_arr[index]);
    cout<<"\n";
    }

cout<<"Students who failed in more than two subjects:\n";
for(unsigned int output_index=0;output_index<25;output_index++)
    {
    if((student_arr[output_index].physics_marks<33)&&(student_arr[output_index].chemistry_marks<33)&&(student_arr[output_index].maths_marks<33))
        {
        student_details_output(student_arr[output_index]);
        cout<<"\n";
        }
    }
return 0;
}