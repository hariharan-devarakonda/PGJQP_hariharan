#include<iostream>
using namespace std;
class add
{
    int num1,num2,result;
    public:void display()
    {
        cout<<"Enter first number:";
        cin>>num1;
        cout<<"Enter second number:";
        cin>>num2;
        result=num1+num2;
        cout<<"Result:"<<result;

    }
};
int main()
{
    add x1;
    x1.display();
}
