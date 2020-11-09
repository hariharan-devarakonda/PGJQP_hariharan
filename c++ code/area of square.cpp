#include<iostream>
using namespace std;
class Square
{
    public: int side,area;
    void area1()
    {
        cout<<"Enter the side of a square:";
        cin>>side;
        area=side*side;
        cout<<"Area of a square is :"<<area;

    }
};
int main()
{
    Square s1;
    s1.area1();
}
