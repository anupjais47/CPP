#include<iostream>
using namespace std;
class Distance
{
private:
    /* data */
    int kilom;
    int meter;
    int centim;
    int desim;
    
public:
    Distance(/* args */)
    {
        kilom=0;
        meter=0;
        centim=0;
        desim=0;
    }
    Distance(int km)
    {
        kilom=km;
    }
    Distance(int km, int m)
    {
        kilom=km;
        meter=m;
    }
    Distance(int km, int m, int cm)
    {
        kilom=km;
        meter=m;
        centim=cm;
    }
    Distance(int km, int m, int cm, int dm)
    {
        kilom=km;
        meter=m;
        centim=cm;
        desim=dm;
    }
    // ~Distance();
    Distance operator+(Distance &obj)
    {
        
    }
};


