#include<iostream>
using namespace std;
class distance
{
	public:
	int km;
	int mm;
	int cm;
	distance()
	{
		km=0;
		mm=0;
		cm=0;
	}
	distance(int k,int m,int c)
	{
		km=k;
		mm=m;
		cm=c;
	}
	void display()
	{
		cout<<km<<" : "<<mm<<" : "<<cm;
	}
	distance operator -()
	{
		distance d2;
		d2.km=-km;
		d2.mm=-mm;
		d2.cm=-cm;
		return d2;
	}	
};
int main()
{
	distance.d1(5,20,50);
	d1.display();
	distance d2=-d1;
	d2.display();
	return 0;
}
