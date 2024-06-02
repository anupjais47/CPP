#include<iostream>
using namespace std;
class Base
{
        public :
                virtual void fun()
                //void fun()
                {
                        cout<<"Base is called\n";
                }
};

class Derived : public Base
{
        private :
                void fun()
                {
                        cout<<"Derived is called\n";
                }
};
int main()
{
        // Derived d;
        // d.fun();
	Derived d;
        Base *b;
        b=&d;
        b->fun();
        return 0;
}
