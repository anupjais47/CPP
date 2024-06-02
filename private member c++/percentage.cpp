 //static member function
#include<iostream>
using namespace std;
class student
{
	static int phy,che,math; static float per;
	public:
		static void input()
		{
			cout<<"enter marks of physics,chemistry,math=";
			cin>>phy>>che>>math;
		}
		static void calculate()
		{
			per=(phy+che+math)/3;
		}
		static void output()
		{
			cout<<"percentage="<<per;
		}
};  int student::phy;	
	int student::che;
	int student::math;
	float student::per;
int main()
{
	student::input();
	student::calculate();
	student::output();
	return 0;		
}
	
	

