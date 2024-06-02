#include<iostream>
using namespace std;
class friends{
    private : string name="Ritu ";
    protected : string mid="Raj ";
    public : string last="sharma";

    
   friend void display(friends &f);
};
 void display(friends &f)
{
    cout<<"Name :"<<f.name<<f.mid<<f.last;
}

int main()
{
    friends f;
    display(f);

    return 0;
}