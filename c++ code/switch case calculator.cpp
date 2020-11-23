#include<iostream>
using namespace std;
class calculator
{
    int choice,num1 ,num2,num3;
    public:void display()
    {
        cout<<"Choose your option:"<<"\n 1:Add"<<"\n 2:Sub"<<"\n 3:Mul"<<"\n 4:Div"<<"\n choice:"<<endl;
        cin>>choice;
    switch (choice)
    {
            case 1: cout<<"Enter two numbers:\n";
            cin>>num1>>num2;
            num3=num1+num2;
            cout<<"sum="<<num3;
            break;

            case 2: cout<<"Enter two numbers:\n";
            cin>>num1>>num2;
            num3=num1-num2;
            cout<<"sub="<<num3;
            break;

            case 3: cout<<"Enter two numbers:\n";
            cin>>num1>>num2;
            num3=num1*num2;
            cout<<"product="<<num3;
            break;

            case 4: cout<<"Enter two numbers:\n";
            cin>>num1>>num2;
            num3=num1%num2;
            cout<<"div="<<num3;
            break;


    }
    }
};
int main()
{
    calculator c1;
    c1.display();
}
