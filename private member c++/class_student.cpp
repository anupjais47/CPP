#include<iostream>
using namespace std;
class student
{
	string name;
	int marks;
	public:
		void getName()
		{
			cin>>name;
		}
		void getMarks()
		{
			cin>>marks;
		}
		void display()
		{
			cout<<"Name :"<<name<<endl;
			cout<<"Marks :"<<marks<<endl;
		}
};
int main()
{
	student stud[5];
	for(int i=0;i<5;i++)
	{
		cout<<"student"<<i+1<<endl;
		cout<<"enter name"<<endl;
		stud[i].getName();
		cout<<"enter marks"<<endl;
		stud[i].getMarks();
	}
	for(int i=0;i<5;i++)
	{
		cout<<"student"<<i+1<<endl;
		stud[i].display();
	}
	return 0;
}

