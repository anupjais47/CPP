#include<iostream>
using namespace std;
class Student
{
    public :
        char name[30];
        int roll;
        float marks;
        char grade;
   int Grade(float marks)
    {
        /*if(marks>95)
        {
            grade='A';
        }
        else*/ 
        if(marks>90)
                {
                    grade='A';
                }
        else if(marks>80)
                {
                    grade='B';
                }
        else if(marks>65)
                {
                    grade='C';
                }
            else
                grade='F';
        return grade;
    }
};
void Detail()
{
    
}
int main()
{
    Student s;
    cout<<"Enter your Name : ";
    cin>>s.name;
    cout<<"Enter the Roll : ";
    cin>>s.roll;
    cout<<"Enter the marks : ";
    cin>>s.marks;
    system("clear");
    // cout<<"Name : "<<s.name<<"\nRoll : "<<s.roll<<"\nMarks : "<<s.marks<<endl<<s.Grade(s.marks)<<endl;    return 0;
    cout<<"Name : "<<s.name<<"\nRoll : "<<s.roll<<"\nMarks : "<<s.marks<<endl;
    return 0;
}