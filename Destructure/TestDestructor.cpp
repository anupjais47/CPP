#include<iostream>
using namespace std;
class TestD
{
    // public:
    protected :
        TestD()
        {
            cout<<"Constructor is calling \n";
        }
        
        ~TestD()
        {
            cout<<"Destructor is calling \n";
        }
        // ~TestD()
        // {
        //     cout<<"Destructor Destructor is calling \n";
        // }
        

};
int main()
{
    TestD Anup;
    cout<<"Hey! Anup chill dude. \n";
    return 0;
}