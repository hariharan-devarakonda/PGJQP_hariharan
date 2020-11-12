#include<iostream>
using namespace std;
class equality
{
    int num1,num2;
    public :void display()
    {
        cout<<"Enter a number:";
        cin>>num1;
        cout<<"Enter a number:";
        cin>>num2;
        if(num1>num2)
        {
            cout<<"num1 is greater than num2";
        }
        else if(num1<num2)
        {
            cout<<"num1 is less than num2";


        }
        else
        {
            cout<<"num1 is equal to num2";
        }
    }
};
int main()
{
    equality e1;
    e1.display();
}
