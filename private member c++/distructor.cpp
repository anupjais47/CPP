#include<iostream>
using namespace std;
class XYZ
{
	int x;
	public:
		XYZ(int a)
		{
			x=a;
			cout<<"constructor envoked\t"<<a<<endl;
		}
		XYZ()
		{
			cout<<"distructor invoked\t"<<x<<endl;
		}
};
int main()
{
	XYZ ob1(5), ob2(7), ob3(10);
	return 0;
}
