#include<iostream>
using namespace std;
void Counter()
{
//    static int a=0;
    int a=0;
    a++;
    cout<<a<<endl;
}
int main()
{
    Counter();
    Counter();   
    Counter();
    Counter();
    return  0;
}