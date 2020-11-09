#include<iostream>
using namespace std;
class average
{
    int num1,num2,num3,num4,num5,avg;
    public: void display()
    {
        cout<<"Enter first number:";
        cin>>num1;
        cout<<"Enter second number:";
        cin>>num2;
        cout<<"Enter third number:";
        cin>>num3;
        cout<<"Enter fourth number: ";
        cin>>num4;
        cout<<"Enter fifth number:";
        cin>>num5;
        avg=num1+num2+num3+num4+num5/5;
        cout<<"Average of 5 numbers is:"<<avg;
    }
};
int main()
{
    average a1;
    a1.display();
}
