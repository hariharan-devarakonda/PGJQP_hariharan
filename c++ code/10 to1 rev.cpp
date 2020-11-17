#include<iostream>
using namespace std;
class Rev
{
    int num=10;
    public:void display()
    {
        for(num=10;num>=1;--num)
        {
            cout<<num<<endl;
        }
    }
};
int main()
{
    Rev r1;
    r1.display();
}
