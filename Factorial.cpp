#include<iostream>
using namespace std;
int main()
{
    int num;
    long fact=1;
    cout<<"Enter a number to find  factorial : ";
    cin>>num;
    if(num<0)
    {
        cout<<num<<" Factorial is not possible.\n";
        exit(0);
    }
    else
    {
        for(int i=1; i<=num; i++)
        {
            fact*=i;
        }
    }
    cout<<"The factorial of "<<num<<" is "<<fact<<endl;
    return 0;
}