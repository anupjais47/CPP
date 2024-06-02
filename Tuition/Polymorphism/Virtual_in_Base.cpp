#include<iostream>
using namespace std;
class Base
{
        public :
                virtual void fun()
                {
                        cout<<"Base is called\n";
                }
};

class Derived : public Base
{
        public :
                // virtual void fun()//It's behaive like void fun()
                void fun()
                {
                        cout<<"Derived is called\n";
                }
};
int main()
{
        Derived d;
        d.fun();
        Base *b;
        b=&d;
        b->fun();
        return 0;
}
