#include<iostream>
using namespace std;
class positive
{
    int num;
    public:void display()
    {
        cout<<"Enter the number:";
        cin>>num;
        if(num>0)
        {
            cout<<"Number is positive";
        }
        else  if(num<0)
            {
            cout<<"Number is negative";
        }
        else{
            cout<<"Number is zero";
        }
    }
};
int main()
{
    positive p1;
    p1.display();
}
