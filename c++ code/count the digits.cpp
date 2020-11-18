#include<iostream>
using namespace std;
class Count1
{
    int num,a=0;
    public :void display()
    {
        cout<<"Enter a number:";
        cin>>num;
        while(num>0)
        {
            num=num/10;
            a++;
        }
        cout<<" Number of digits in a number is :"<<a<<endl;
    }
};
int main()
{
    Count1 c;
    c.display();
}
