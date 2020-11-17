#include<iostream>
using namespace std;
class  Number
{
    int num,rev=0,rem;
    public:void display()
    {
        cout<<"Enter the number:";
        cin>>num;
        while(num>0)
        {
            rem=num%10;
            rev=rev*10+rem;
            num=num/10;
        }
        cout<<"Reverse of the number:"<<rev<<endl;

    }
};
int main()
{
    Number n1;
    n1.display();
}
