#include<iostream>
using namespace std;
class num_2
class num_1
{
	int value1;
	public:
		void indata(int a)
		{
			value1=a;
		}
		void display(void)
		{
			cout<< value1<<"\n";
		}
		friend void exchange(num_1 &,num_2 &);
};
class num_2
{
	int value2;
	public:
		void indata(int a)
		{
			value2=a;
		}
		void display(void)
		{
			cout<<value2<<"\n";
		}
		friend void exchange(num_1 &, num_2 &);
};
void exchange(num_1 & x, num_2 & y)
{
	int temp=x.value1;
	x.value1=y.value2;
	y.value2=temp;
}
int main()
{
	num_1 N1;
	num_2 N2;
	N1.indata(100);
	N2.indata(200);
	cout<<"value before exchange"<<"\n";
	N1.display();
	N2.display();
	exchange(N1,N2);//swapping
	
	cout<<"values after exchange"<<"\n";
	N1.display();
	N2.display();
	return 0;
}
