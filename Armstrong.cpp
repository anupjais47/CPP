#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int num,arm=0,temp;
    cout<<"Enter a number to check Armstrong : ";
    cin>>num;
    temp=num;
    while(num!=0)
    {
        arm+=pow((num%10),3);
        num/=10;
    }
    if(temp==arm)
        cout<<"\nThe given number "<<temp<<" is an Armstrong.\n";
    else
        cout<<"\nThe given number "<<temp<<" is not an Armstrong.\n";
    return 0;
}
