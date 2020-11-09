#include<iostream>
using namespace std;
class interest
{
public :double principal, rate, time,simpleinterest;
    void display()
    {
        cout<<"Enter principal:";
        cin>>principal;
        cout<<"Enter rate:";
        cin>>rate;
        cout<<"Enter time:";
        cin>>time;
        simpleinterest=principal*rate*time/100;
        cout<<"simple interest is:"<<simpleinterest;
    }
};
int main()
{
    interest i1;
    i1.display();
}
