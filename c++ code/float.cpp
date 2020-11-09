#include<iostream>
using namespace std;
class number
{
    public: float num1,num2, Product;
    void display()
    {
        cout<<"Enter first number:";
        cin>>num1;
        cout<<"Enter second number:";
        cin>>num2;
        Product=num1*num2;
        cout<<"Product:"<<Product;
    }

};
int main()
{
    number m1;
    m1.display();
}
