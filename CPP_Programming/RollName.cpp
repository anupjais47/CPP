#include<iostream>
// #include<conio>
using namespace std;
class Student
{
	private :
		int roll;
		char name[20];
		float marks;
	public :
		void get()
		{
			cout<<"Enter Name";
			cin>>name;
			
			cout<<"Enter Roll";
			cin>>roll;
			cout<<"Enter Marks";
			cin>>marks;
		}
		void put()
		{
			cout<<"Roll : \nName : \nMarks : ";
			//cout<<"roll"<<"\n"<<"name"<<"\n"<<"marks"<<"\n";
		}
	
};
void main()
{
	Student std;
	system("clear");
	std.get();
	std.put();
	//getch();
}
