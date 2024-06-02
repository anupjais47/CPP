#include<iostream>
using namespace std;
class NoName
{
    int a;
    public :
    NoName()
    {
        cout<<"Costructor Called\n";
    }
    ~NoName()
    {
        cout<<"Destructor Called\n";
    }
};
int main()
{
    NoName();
    // NoName n1,n2;
    NoName n1;
    NoName n2;
    return 0;
}