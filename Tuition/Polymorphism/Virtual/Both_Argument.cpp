#include<iostream>
#include<thread>
#include<chrono>
using namespace std;
class Parent
{
    public :
        virtual void Fun(int x=0)
        {
            cout<<"Parent::Fun(),x = "<<x<<endl;
        }
};
class Child : public Parent
{
    public :
        void Fun(int x=20)
        {
            cout<<"Parent::Fun(),x = "<<x<<endl;
        }
};
int main()
{
    Parent *P,par;
    P=&par;
    P->Fun();
    this_thread::sleep_for (std::chrono::seconds(1));
    Child C,*Cptr;
    P=&C;
    P->Fun();
    // Cptr=&par;
    this_thread::sleep_for (std::chrono::seconds(2));
    Cptr->Fun();
}