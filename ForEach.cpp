#include<iostream>
using namespace std;
int main()
{
    int sum=0,num[]={1,2,3,4,5,6,7,8,9,10};//,a;
    //cout<<"Enter a table for find there sum : ";
    //cin>>a;
    for(int x : num)
    {
        cout<<"Value is : "<<x<<endl;
        sum+=x;
    }
    cout<<"Summation : "<<sum<<endl;
    return 0;
}
