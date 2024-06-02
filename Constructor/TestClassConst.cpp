#include<iostream>
using namespace std;
class Test
{
        public :
                Test();
};
Test::Test()
{
        cout<<"Constructor of a class Test called"<<endl;
}
Test G;
void func()
{
        cout<<"Anup47!"<<endl;
        Test L;
        cout<<"Here's function func() "<<endl;
}
int main()
{
        Test X;
        cout<<"main() function"<<endl;
        cout<<"Anup!"<<endl;
        func();
        
        return 0;
}
