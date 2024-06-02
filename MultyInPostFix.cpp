#include<iostream>
using namespace std;
int main()
{
    //int x=5, y;
    int x, y;
    cout<<"x++ + ++x * ++x\n";
    for(int i=0; i<10; i++)
    {
        x=i;
        y=x++ + ++x * ++x;
        cout<<x<<" "<<y<<endl;
        cout<<"Executed\n"<<i+1<<endl;
    }
    cout<<"++z + ++z - z++\n";
    for(int i=0; i<10; i++)
    {
        int z=i, a;
         a=++z + ++z - z++;
        cout<<z<<" "<<a<<endl;
        cout<<"Executed"<<i+1<<endl;        
    }
    
   
    return 0;
}
