#include<iostream>
using namespace std;
class Base
{
    public :
    void Shoow()
    {
    cout<<"This is Base class\n";
    }
};
class Derived : public Base
{
    public :
     void Shoow()
    {
    cout<<"This is Derived class\n";
    }
};
int main()
{
    Base *d;
    Derived oj;
    d=&oj;
    d->Shoow();
    // d.Shoow();
    // d.Shoow();
    return 0;
}