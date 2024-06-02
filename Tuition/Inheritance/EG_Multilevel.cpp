#include<iostream>
#include <cstring>

using namespace std;
class Person
{
    public  :
        char pid[10];
        char name[30];
        char gender;
        // Date dob;
        Person(char p_id[], char p_name[], char *p_gender)
        {
            strcpy(pid,p_id);
            strcpy(name, p_name);
            this->gender=p_gender;
        }
        void Show()
        {
            cout<<"The Person is \n"<<pid<<"\n"<<name<<"\n"<<gender<<"\n";
        }

};
int main()
{
    Person p("129","Ja_pan","M");
    p.Show();

    return 0;
}