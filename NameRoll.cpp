#include<iostream>
//#include<conio>
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
			cout<<"Enter Name : ";
			cin>>name;
			
			cout<<"Enter Roll : ";
			cin>>roll;
			cout<<"Enter Marks : ";
			cin>>marks;
		}
		void put()
		{
			system("clear");
			//cout<<"Roll : ",<<"roll"<<"Name : ",<<"name"<<"Marks : ",<<"marks";
			std::cout<<"Roll : ",<<"roll"<<"\n";
			//cout<<"roll"<<"\n";
			//cout<<"roll"<<"\n"<<"name"<<"\n"<<"marks"<<"\n";
		}
	
};
int main()
{
	Student std;
	system("clear");
	std.get();
	std.put();
	//get();
	//put();
	//getch();
	//getc();
}
