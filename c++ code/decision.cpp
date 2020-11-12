#include<iostream>
using namespace std;
class decision
{
    int number;
    public :void display()
    {
        cout<<"Enter a number";
        cin>>number;
        if(number%2==0)
        {
            cout<<"number is even";
        }
        else
        {
            cout<<"number is odd";
        }
    }
};
int main()
{
    decision d1;
    d1.display();
}
