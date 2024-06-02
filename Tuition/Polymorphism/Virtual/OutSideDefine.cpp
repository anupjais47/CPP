#include<iostream>
using namespace std;
class Super
{
    public :
        virtual void MSG();
};
class Sub : public Super
{
    public :
        void MSG()
        {
            cout<<"This property belongs to Sub class.\n";
        }
};
Super:: void MSG()
{
    cout<<"This property belongs to Super class.\n";
}
int main()
{
    Sub s;
    Super *su=&s;
    su->MSG();
    // return 0;
}

/*Super:: void MSG()
{
    cout<<"This property belongs to Super class.\n";
}*/