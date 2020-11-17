#include<iostream>
using namespace std;
class Joe
{
    int num;
    public :void display()
    {
        for(num=1;num<=10;num++)
        {
            cout<<num<<endl;
        }
    }
};
int main()
{
    Joe j1;
    j1.display();
}
