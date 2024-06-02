#include<iostream>
using namespace std;
class A
{
	static int count;
	public :
		A()
		{
			count++;
		}
		int getCount()
		{
			return count;
		}
		
};
int main()
{
	A obj,obj1,obj2;
	cout<<getCount();
	return 0;
}
