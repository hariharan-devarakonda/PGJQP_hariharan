#include<iostream>
using namespace std;
class Greater
{
    int num1,num2;
    public :void display()
    {
        cout<<"Enter two numbers:";
        cin>>num1>>num2;
        if(num1>num2)
        {
            cout<<"num1 is greater";
        }
        else{
            cout<<"num2 is greatre";
        }
    }
};
int main()
{
    Greater g1;
    g1.display();
}
