#include<iostream>
using namespace std;
class convert
{
	private:
		float f,c;
		void input()
		{
			cout<<"enter fahrenheit=";
			cin>>f;
		}
	public:
		void output()
		{
			input();
			c=(f-32)/1.8;
			cout<<"celsius="<<c;
		}
};
int main()
{
	convert ob;
	ob.output();
	return 0;
}
