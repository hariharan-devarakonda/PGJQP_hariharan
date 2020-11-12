#include<iostream>
using namespace std;
class Function
{
    int num;
    public : int inc(int a, int b, int c)
    {
        return a+b+c;
    }
};
int main()
{
    Function f1;
    int num1,num2,num3;
    cout<<"Enter three numbers:";
    cin>>num1>>num2>>num3;
    cout<<f1.inc(num1,num2,num3);
}
