#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int num,i,arm,temp;
    /*cout<<"Enter a number to check Armstrong : ";
    cin>>num;
    temp=num;*/
        // for(num=i)
    for(i=100; i<1000; i++)
    {
        temp=i;
        cout<<i<<endl;
        arm=0;
        while(i!=0)
            {
                arm+=pow((i%10),3);
                i/=10;
                cout<<"Hello\t "<<i<<" ";
            }
        if(temp==arm)
            cout<<"\nThe given number "<<temp<<" is an Armstrong.\n";
    }
    // else
    //     cout<<"The given number "<<temp<<" is not an Armstrong.\n";
    return 0;
}
