#include<iostream>
using namespace std;
class Distance
{
    public :
        int km;
        int m;
        int cm;
        Distance()
        {
            km=0;
            m=0;
            cm=0;
        }
        Distance(int K, int M, int C)
        {
            km=K;
            m=M;
            cm=C;
        }
        Distance operator-()
        {
            Distance D;
            D.km=-km;
            D.m=-m;
            D.cm=-cm;
            return D;
        }
        void Display()
        {
            cout<<km<<" KM "<<m<<" M "<<cm<<" CM \n";
        }
        void getInput()
        {
            cout<<"Distance \nDistance in KM : ";
            cin>>km;
            cout<<"Distance in M : ";
            cin>>m;
            cout<<"Distance in CM : ";
            cin>>cm;
        }
};
int main()
{
    /*Distance d;
    d.Display();
    Distance d1(12,10,5);
    d1.Display();
    Distance d2=-d1;
    d2.Display();*/
    Distance d,d1,d2;
    d.getInput();
    d1=-d;
    d.Display();
    d1.Display();
    d2.Display();
    return 0;
}