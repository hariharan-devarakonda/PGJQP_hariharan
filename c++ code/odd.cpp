#include<iostream>
using namespace std;
class Odd
{
    int num;
    public :void display()
    {
        for(num=1;num<=100;num++)
        {
            if(num%2!=0)
            {
                cout<<num<<endl;
            }
        }
    }
};
int main()
{
    Odd o1;
    o1.display();
}
