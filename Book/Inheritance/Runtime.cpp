#include<iostream>
#include<thread>
#include<chrono>
using namespace std;
class Base
{
        private :
                int x,y;
        public :
                Base(int a, int b): y(a), x(y+b){}
                void Print()
                {
                        cout<<x<<"\t";
                        cout<<y<<endl;
                }
};
int main()
{
        //Base b,b1(2,3);   //error: no matching function for call to ‘Base::Base()’Base b,b1(2,3);
        Base b1(2,3);
        for(int i=1; i<100; i++)
        {
                if(i%10==0)
                {
                   this_thread::sleep_for (std::chrono::seconds(10));
                   printf("\t*%d times* \n",i/10);
                }
                //b.Print();
                //Sleep(10);
                //this_thread::sleep_for (std::chrono::seconds(1));
                b1.Print();
        }       
        cout<<endl;
        return 0;
}
