#include<iostream>
using namespace std;
class construct
{
    public: float area;

    construct()     //constructor without parameters
    {
        area=15;
    }
    construct(int x,int y)  //constructor with parameters
    {
        area=x*y;
    }
    void display()
    {
        cout<<area<<endl;
    }
};
int main()
{
    construct c1;
    construct c2(20,40);

    c1.display();
    c2.display();
    return 0;
}
