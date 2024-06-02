#include<iostream>
using namespace std;
class complexNumber
{
	private:
		float real;
		float imag;
		public
		complexNumber()
		{
			real=0;
			imag=0;
		}
		complexNumber(float r,float i)
		{
			real=r;
			imag=i;
		}
		void add(complexNumber c1,complexNumber c2)
		{
			real=real+c1.real;
			imag=imag+c2.imag;
		}
		void print()
		{
			
		}
};
int main()
{
	complexNumber 
	
	return 0;
}

