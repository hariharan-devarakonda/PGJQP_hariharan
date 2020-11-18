#include<iostream>
using namespace std;
class Fibo
{
    int x=0,y=1,z,i,num;
    public :void display()
    {
        cout<<"Enter a number:";
        cin>>num;
        cout<<x<<""<<y<<""<<endl;
        for(i=2;i<num;++i)
        {
            z=x+y;
            cout<<z<<"";
            x=y;
            y=z;
        }
    }
};
int main()
{
    Fibo f2;
    f2.display();
}
