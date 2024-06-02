#include<iostream>
using namespace std;
class Student
{
    char Name[50], CName[50], State[30], Country[40];
    int Roll, Reg;
    // Date DOB;
    public :
        void input()
        {
            cout<<"Enter your name : ";
            cin>>Name;
            cout<<"Enter your College Name : ";
            cin>>CName;
            cout<<"Enter your State name : ";
            cin>> State;
            cout<<"Enter your Country name : ";
            cin>>Country;
            cout<<"Enter your Roll : ";
            cin>>Roll;

            cout<<"Enter your Registation No. : ";
            cin>>Reg;
        }
        void output()
        {
            system("clear");
            cout<<"Name : "<<Name<<endl;
            cout<<"Roll : "<<Roll<<"\t";
            cout<<"Registation No. : "<<Reg<<endl;
            cout<<"College : "<<CName<<endl;
            cout<<"State : "<<State<<"\t";
            cout<<"Country : "<<Country<<endl;

        }
        bool Compare(Student stud)
        {
            // static  char Country="India";
            static char strcpy(*Country,"India");
            // return this->Country==stud.Country;
        }
};
int main()
{
    Student stud;
    stud.input();
    stud.output();
    return 0;
}