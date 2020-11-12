#include<iostream>
using namespace std;
class inequality
{
    int num1,num2;
    public:void display()
    {
        cout<<"Enter two numbers:";
        cin>>num1>>num2;
        if(num1!=num2)
        {
            cout<<"num1 is not equal to num2";

        }

     else {
        cout<<"num1 is equal to num2";
     }

    }
};
int main()
{
    inequality i1;
    i1.display();
}
