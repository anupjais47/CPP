#include<iostream>
// int nobjects =0;
// int nobj_alive =0;
using namespace std;
int nobjects =0;
int nobj_alive =0;

class MyClass
{
    public:
    MyClass()
    {
        ++nobjects;
        ++nobj_alive;
    }
    ~MyClass()
    {
        --nobj_alive;
    }
    void Show()
    {
        cout<<"Total number of created objects : "<<nobjects<<endl;
        cout<<"Number of objects currently alive : "<<nobj_alive<<endl;
    }
}; // namespace std;
int main()
{
    MyClass obj1;
    obj1.Show();
    {
        MyClass obj1,obj2;
        obj2.Show();
    }
    obj1.Show();
    MyClass obj2,obj3;
    obj2.Show();
    return 0;
}
