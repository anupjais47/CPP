#include<iostream>
#include<windows.h>

using namespace std;
class Time
{
	int hh;
	int mm;
	int ss;
	public:
	Time()
	{
		hh=0;mm=0;ss=0;
	}
	Time(int h,int m,int s)
	{
		hh=h;
		mm=m;
		ss=s;
	}
	void display()
	{
		cout<<hh<<" : "<<mm<<" : "<<ss<<endl;
	}
	Time operator ++(int)
	{
		Time t1(hh,mm,ss);
		ss++;
		if(ss>59)
		{
			ss=ss-60;
			mm++;
		}
		if(mm>59)
		{
			mm=mm-60;
			hh++;
		}
		
		return t1;
	}
};
int main()
{
	Time t1;
	/*while(1)
	{
		system("cls");
		
		(t1++).display();
		Sleep(980);
	}*/
	(t1++).display();
	t1.display();
	//(++t1).display();
	Time t2=t1++;
	t2.display();
	t1.display();
	
	return 0;
}

