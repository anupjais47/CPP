#include<iostream>
using namespace std;
class Rectangle
{
        public :
        float length;
        float width;
        
        
        float getArea()
        {
        return length*width;
        }
        float getPerimeter()
        {
        return 2*(length+width);
        }
        
};

int main()
{
        Rectangle rect;
        cout<<"Area = "<<rect.getArea()<<"\n";
        cout<<"Perimeter = "<<rect.getPerimeter()<<"\n";
        cout<<rect.length<<", "<<rect.width<<"\n";
        return 0;
}
