#include<iostream>
using namespace std;
class ComplexNumber
{
    private :
        int real,img;
        // int img;
    public :
        ComplexNumber()
        {
            real=0;
            img=0;
        }
        ComplexNumber(float r, float i)
        {
            real=r;
            img=i;
        }
        void Print()
        {
            cout<<real<<" + i"<<img<<endl;
        }
        void Add(ComplexNumber a,ComplexNumber b)
        {
            ComplexNumber c;
            c.real=a.real+b.real;
            c.img=a.img+b.img;

        }

};
int main()
{
    // char ch[]
    // float a,b;
    ComplexNumber A,A1(5,-2),A2(-2,7);
    // cout<<"Enter Real part of the complex number : ";
    // // cin>>A.real;
    // A.real;
    // cout<<"Enter Imaginary part of the complex number : ";
    // // cin>>A.img;
    // A.img;
    // cout<<"The entered complex number is ";
    // Print(A.real,A.img);
    A.Print();
    A1.Print();
    A2.Print();

    // A.Add(A2());
    // cout<<"Addition of the complex number is ";
    // Add()
    return 0;
}

// Copy constructor
// Percitance
