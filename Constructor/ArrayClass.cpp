#include<iostream>
const int DATA=5;
using namespace std;

class ArrayC
{
private:
    /* data */
    unsigned int a[DATA];
public:
    ArrayC()
    {
        cout<<"Check ArrayC \n";
    }
    void Show()
    {
        for(int i=0; i<DATA; i++)
            cout<<" "<<a[i];
    }
    void Get()
    {
        for(int i=0; i<DATA; i++)
            cin>>a[i];
    }
};

int main()
{
    ArrayC arr;
    cout<<"Enter the elements of an array : ";
    arr.Get();
    cout<<"The array elements are -> ";
    arr.Show();
    cout<<"\nThank you for using our program 😊️😊️😊️😊️😊️\n";
    return 0; 
}