#include<iostream>
using namespace std;
class Rectangle
{
        private :
        float length;
        float width;
        /*Rectangle()
        {
                length=2;
                width=3;
        }*/
        public :
        Rectangle(float l, float w)
        {
                length=l;
                width=w;
        }
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
        //Rectangle rect, rect1(4,6);
        Rectangle rect2(4,6);
        /*cout<<"Area = "<<rect.getArea()<<"\n";
        cout<<"Perimeter = "<<rect.getPerimeter()<<"\n";
        cout<<"Length = "<<rect.length<<", Width = "<<rect.width<<"\n";*
        cout<<"Length = "<<rect1.length<<", Width = "<<rect1.width<<"\n";
        cout<<"Area = "<<rect1.getArea()<<"\n";
        cout<<"Perimeter = "<<rect1.getPerimeter()<<"\n";*/
        cout<<"Length = "<<rect2.length<<", Width = "<<rect2.width<<"\n";
        cout<<"Area = "<<rect2.getArea()<<"\n";
        cout<<"Perimeter = "<<rect2.getPerimeter()<<"\n";
        rect2.length=15;
        rect2.width=20;
        cout<<"Length = "<<rect2.length<<", Width = "<<rect2.width<<"\n";
        cout<<"Area = "<<rect2.getArea()<<"\n";
        cout<<"Perimeter = "<<rect2.getPerimeter()<<"\n";
        return 0;
}
