#include<iostream>
using namespace std;
class Amstrong
{
    int n,num,sum=0,rem;
    public:void display()
    {
        cout<<"Enter a number:";
        cin>>num;
        n=num;
        while(n!=0)
        {
            rem=n%10;
            sum=sum+(rem*rem*rem);
            n=n/10;
        }
        if(sum==num)
        {
            cout<<"Its an amstrong number"<<num<<endl;
        }
        else
            cout<<"Its not an amstrong number"<<num<<endl;

    }
};
int main()
{
    Amstrong a1;
    a1.display();
}
