#include<iostream>
using namespace std;
class Base
{
    int x;
    protected:
    int y;
    public:
    int z;
    void Disp()
    {
        //cout<<x<<y<<z;
        //cout<<y<<z;
        cout<<"\nBase Called\n";
    }
    
}; // namespace Base
class PrivateDerived : private Base
{
    // x=1;y=2;z=3;
   // y=2;z=3;
    // cout<<"PrivateDerived Called\n";
    void Disp()
    {
       // cout<<x<<y<<z;
        cout<<y<<z;
        cout<<"\nBase Called\nPrivateDerived\n";
    }
};
class ProtectedDerived : private Base
{
    // x=5;y=6;z=7;
    y=6;z=7;
    // cout<<"ProtectedDerived Called\n";
    void Disp()
    {
        cout<<y<<z;
        cout<<"\nBase Called\nProtectedDerived\n";
    }
};
class PubliucDerived : private Base
{
    // x=0;y=9;z=8;
    y=9;z=8;
    // cout<<"PubliucDerived Called\n";
    void Disp()
    {
        cout<<x<<y<<z;
        cout<<"\nBase Called\nPubliucDerived\n";
    }
};
int main()
{
    Base objB;
    Disp();
    // cout<<x<<y<<z;
    PrivateDerived objPr;
    // cout<<objPr.x<<objPr.y<<objPr.z;
   // objPr.Disp();
     ProtectedDerived objPo;
    // cout<<objPo.x<<objPo.y<<objPo.z;
   // objPo.Disp();
     PubliucDerived objPu;
    // cout<<objPu.x<<objPu.y<<objPu.z;
   // objPu.Disp();
    return 0; 
}
