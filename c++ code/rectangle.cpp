#include<iostream>
using namespace std;
class Rectangle
{
    public: double length,breadth, area, perimeter;
    void area2()
    {
        cout<<"Enter the length of a rectangle:";
        cin>>length;
        cout<<"Enter the breadth of a rectangle:";
        cin>>breadth;
        cout<<"Area of a rectangle is :"<<area<<"\n";
        cout<<"Perimeter of a rectangle is:"<<perimeter;
        area=length*breadth;
        perimeter=2*(length+breadth);
    }
};
int main()
{
    Rectangle r1;
    r1.area2();
}
