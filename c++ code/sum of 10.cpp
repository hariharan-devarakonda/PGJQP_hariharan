#include<iostream>
using namespace std;
class Sum
{
    int num, sum=0;
    public :void display()
    {
        for(num=0;num<=10;num++)
        {
            sum=sum+num;
        }
        cout<<sum<<endl;
    }
};
int main()
{
    Sum s1;
    s1.display();
}
