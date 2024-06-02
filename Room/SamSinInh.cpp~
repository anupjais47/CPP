//Sampale program of Single Inheritance
#include<iostream>
using namespace std;
class Base
{
    public:
    int x,y;
    Base()
    {
        x=y=5;
    }
    // Display Function
    void Disp()
    {
        cout<<x<<", "<<y<<endl;
    }
};
// Deriving Private Class
class DerPr : private Base
{
    public:
    //x=10;y=20;
    x=y=20;
     void Disp()
    {
        cout<<x<<", "<<y<<endl;
    }
};

int main()
{
    //Calling Base
    Base b;
    b.Disp();
    //Calling Derived
    DerPr d;
    d.Disp();
    return 0;
}
