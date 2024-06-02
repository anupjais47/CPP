#include<iostream>
using namespace std;
class Abc
{
	private:
		int x;
	Abc()
	{
		x=4;
		cout<<"Constructor is called\n";
	}
	public :
		static Abc* Create()
		{
			Abc *obj;
			return  new Abc();
		}
		 void display()
		 {
		 	cout<<"x";
		 }
};
//int A::count=0;
int main()
{
	Abc *obj=Abc::Create();
	obj->display();
	return 0;
}
