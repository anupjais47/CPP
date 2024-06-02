#include<iostream>
using namespace std;
class Abc
{
	public :
		int i;
		static int a;
		Abc(int a)
		{
			i=a;
		}
		
};
int Abc::a=10;
int main()
{
	Abc obj(5);
	cout<<obj.i<<endl;
	cout<<obj.a++<<endl;
	cout<<++obj.a<<endl;
	return 0;
}
