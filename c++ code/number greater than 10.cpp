#include<iostream>
using namespace std;
class number
{
    int num;
    public:void display()
    {
        cout<<"Enter a number:";
        cin>>num;
        if(num>10)
        {
            cout<<"Number is greater than 10";
        }
        else
        {
            cout<<"Number is less than 10";
        }
    }
};
int main()
{
    number n1;
    n1.display();
}
