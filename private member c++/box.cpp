#include<iostream>
using namespace std;
class Box
{
	private:
		float length;
		float wigth;
		float hight;
		public:
			Box(float length,float wigth,float hight)
			{
				this->length;
				this->wigth;
				this->hight;
			}
			float volune()
			{
				return length*wigth*hight;
			}
			bool compare(Box box)
			{
				return this->volune()>box.volune();
			}	
};
int main()
{
	Box b1(5,4,3);
	Box b2(2,5,3);
	cout<<b1.compare(b2);
}
