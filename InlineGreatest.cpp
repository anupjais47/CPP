#include<iostream>
using namespace std;
inline int Great(int a, int b)
{
    return a>b?a:b;
}
int main()
{
    int m,n;
    cout<<"Enter two numbers to find the greatest one : ";
    cin>>m>>n;
    cout<<"The greatest number is "<<Great(m,n)<<endl;
    return 0;
}