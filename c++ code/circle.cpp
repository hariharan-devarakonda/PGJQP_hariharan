#include<iostream>
using namespace std;
class circle
{
    public: float radius, area;
    void area3()
    {
        cout<<"Enter radius of a circle:";
        cin>>radius;
        area=3.14*radius*radius;
        cout<<"area of a circle is :"<<area;
    }
};
int main()
{
    circle c1;
    c1.area3();
}
