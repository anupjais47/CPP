#include<iostream>
using namespace std;
class Time
{   
    int hh, mm, ss;
    public :
    Time()
    {
        hh = mm = ss =0;
    }
    /*Time(int h, int m, int s)
    {
        hh=h;
        mm=m;
        ss=s;
    }*/
    /*Time(int h, int m, int s)
    {
         hh = mm = ss =0;
        ss+=s;
        if(ss>59)
        {
            ss-=60;
            mm++;
        }
        mm+=m;
        if(mm>59)
        {
            mm-=60;
            hh++;
        }
        hh+=h;
        if(hh>23)
        {
            hh-=24;
            // mm++;
        }
    }*/
    void Display()
    {
        cout<<hh<<" : "<<mm<<" : "<<ss<<"\n";
    };
    // int GetTime(int H, int M, int S)
    // int GetTime()
    /*void GetTime()
    {
        Time t;
        cout<<"Enter Time : ";
        cin>>t.hh>>t.mm>>t.ss;
        // return t;
    }*/

};
int main()
{
   Time t;
    t.Display();
    t.Display();
    Time T(112,390,240);
    T.Display();


    return 0;
}