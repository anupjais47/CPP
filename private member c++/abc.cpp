#include<iostream>
using namespace std;
class Abc
{
	int i;
	public:
		Abc(int a)
		{
			i=a;
			cout<<"\n constructor  "<<i<<endl;
		}
		~Abc()
		{
			cout<<"\n Distructor  "<<i<<endl;
		}
};
void function()
{
	static Abc obj(1),a(2);
}
int main()
{
	int i=0;
	if(i==0)
	{
		function();
	}
	cout<<"\n end"<<endl ;
	return 0;
}
