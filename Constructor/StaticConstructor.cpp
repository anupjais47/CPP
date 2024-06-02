#include<iostream>
using namespace std;
class Abc
{
    Abc()
    {
        x=4;
        cout<<"Constructor is called\n";
    }
    int x;
    public:
    /*static Abc Create()
    // Abc Create()
    {
        // return new.Abc();
        return Abc();
    }*/
    static Abc* Create()
    {
        Abc *obj;
        obj=new Abc();
        return obj;
    }
    void Display()
    {
        cout<<x;
    }
};
int main()
{
    Abc *obj = Abc::Create();
    obj->Display();
    return 0;
}
