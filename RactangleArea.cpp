#include<iostram>
using namespace std;
class Ractangle
{
    int l,b;
    public :
        Ractangle(int a,int c)
        {
            l=a;
            b=c;
            Area();
        }
        int Area()
        {
            return l*b;
        }
};
int main()
{
    Ractangle r;
    
}