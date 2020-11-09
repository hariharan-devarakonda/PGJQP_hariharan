#include<iostream>
using namespace std;
class Integer

{
    int num1;
    public : void display()
    {
    cout<<"Enter integer number";
    cin>>num1;
    cout<<"Integer number is:";
}

};
int main()
{
    Integer n1;
    n1.display();
}
