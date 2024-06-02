#include<iostream>
#include<string.h>
using namespace std;
class Test
{
    private :
        char *name;
    public :
    Test()
    {
        name=new char[strlen("unnamed")+1];
        strcpy(name,"unnamed");
        cout<<"Test object 'unnamed' created"<<endl;
    }
    Test(char *NameIn)
    {
         system("clear");
        name=new char[strlen("NameIn")+1];
        strcpy(name,NameIn);
        cout<<"Test object "<<NameIn<<" created"<<endl;
    }
    ~Test()
    {
        cout<<"Test object "<<name<<" destroyed\n";
        delete name;
    }
};
Test g("Global");
void func()
{
    Test l("Func");
    cout<<"Here's function func()\n";
}
int main()
{
    // system("clear");
    Test X("main");
    func();
    cout<<"Main() function - Termination\n";
    return 0;
}