#include<iostream>
using namespace std;

class child{
    private :
    int p;
    void cprdisplay()
    {
     cout<<"child private"<<endl;

    }
    protected:
    int pro;
    void cprodisplay()
    {
     cout<<"child protected"<<endl;

    }
    public:
    int pub;
    void cpdisplay()
    {
     cout<<"child public"<<endl;

    }
};
class base:protected child{
    protected:
    int bp;
    void bprodisplay()
    {
     cout<<"base protected"<<endl;

    }
    private:
    int bpr;
    void bprdisplay()
    {
     cout<<"base private"<<endl;

    }
    public:
    int bpub;
    void bpdisplay()
    {
     cout<<"base public"<<endl;

    }
};
int main()
{
    base c;
    c.bpdisplay();
    c.cprdisplay();
    return 0;
}