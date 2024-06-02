#include<iostream>
using namespace std;
class Base
{
        public :
                virtual void fun(int x=5)
                //void fun()
                {
                        cout<<"Base::fun(), x = "<<x<<endl;
                }
};

class Derived : public Base
{
        public :
                //virtual void fun()
                // void fun(int x)
                void fun(int x=22)
                //void fun()
                {

                	cout<<"Derived::fun(), x = "<<x<<endl;
                }
};
int main()
{
        // Derived d;
        // d.fun();
        Base *b;
        Derived d;
        b=&d;
        b->fun();
        return 0;
}
