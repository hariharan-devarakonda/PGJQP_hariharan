#include<iostream>
using namespace std;
class Table
{
    int x,y;
    public:void display()
    {
        cout<<"Enter a number:";
        cin>>x;
        for(y=0;y<=10;y++)
        {
            cout<<x*y<<endl;
        }
    }
};
int main()
{
    Table t1;
    t1.display();
}
