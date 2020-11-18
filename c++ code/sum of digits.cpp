#include<iostream>
using namespace std;
class Digits
{
    int n,sum=0,rem;
    public:void display()
    {
        cout<<"Enter a number:";
        cin>>n;
        while(n>0)
        {
            rem=n%10;
            sum=sum+rem;
            n=n/10;
        }
        cout<<"Sum of digits :"<<sum<<endl;
    }
};
int main()
{
    Digits d;
    d.display();
}
