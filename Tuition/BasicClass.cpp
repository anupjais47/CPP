#include<iostream>
using namespace std;
class Rectangle
{
    float lenght;
    float width;

    public :
        void Draw()
        {
            cout<<"The rectangle is drawn\n";
        }
        float getArea();
        float getPerimeter()
        {
            return 2*(lenght+width);
        }
        void input()
        {
            cout<<"Enter Length of a rectangle : ";
            cin>>lenght;
            cout<<"Enter Width of a rectangle : ";
            cin>>width;
        }
};
float Rectangle::getArea()
{
    return lenght*width;
}
int main()
{
    Rectangle rect;
    rect.input();
    rect.Draw();
    cout<<"The area is "<<rect.getArea()<<endl;
    cout<<"The perimeter is "<<rect.getPerimeter()<<endl;
    return 0;
}