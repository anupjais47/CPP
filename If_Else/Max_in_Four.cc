#include<iostream>
using namespace std;
int main()
{
	int a,b,c,d,max;
	cout<<"Enter four numbers to find maximum one of them \n";
	cin>>a>>b>>c>>d;
	if(a>b)
		if(a>c)
			if(a>d)
				max=a;
			else
				max=d;
		else
			if(c>d)
				max=c;
			else
				max=d;
	else
		if(b>c)
			if(b>d)
				max=b;
			else
				max=d;
				
	cout<<"The Maximum Number = "<<max<<endl;
	return 0;
}
