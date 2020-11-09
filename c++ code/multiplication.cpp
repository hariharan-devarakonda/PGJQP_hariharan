#include<iostream>
using namespace std;
class Product
{
    int num1,num2,num3,result;
    public: void display()
    {
        cout<<"Enter the first number:";
        cin>>num1;
        cout<<"Enter the second number:";
        cin>>num2;
        cout<<"Enter the third number:";
        cin>>num3;
        result=num1*num2*num3;
        cout<<"Result is:"<<result;
    }
};
int main()
{
    Product k1;
    k1.display();

}
