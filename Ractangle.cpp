#include<iostream>
using namespace std;
class Ractangle
{
    int l,b;
     public : 
        Ractangle()
        {
            // int m,n;
            cout<<"Enter the length and width \n";
            cin>>l;
            cin>>b;
        }
        void Area()
        {
            int ar=l*b;
            cout<<"The area is "<<ar<<endl;
        }
};
int main()
{
    Ractangle r;
    r.Area();
    return 0;
}