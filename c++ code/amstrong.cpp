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
        while(n>0)
        {
            rem=num%10;
            sum=sum+rem*rem*rem;
            num=num/10;
        }
        if(num==sum)
        {
            cout<<"Its an amstrong number"<<endl;
        }
        else
            cout<<"Its not an amstrong number"<<endl;

    }
};
int main()
{
    Amstrong a1;
    a1.display();
}
