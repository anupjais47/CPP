#include<iostream>
int Max(int a, int b);// Without decalring the function, compiler found error(‘Max’ was not declared in this sco)
using namespace std;
int main()
{
    int x,y;
    cout<<"Enter two numbers : ";
    cin>>x>>y;
    cout<<"Maximum = "<<Max(x,y)<<endl;
    return 0;
}
int Max(int a, int b)
{
    if(a>b)
        return a;
    else
    {
        return b;
    }
    
}