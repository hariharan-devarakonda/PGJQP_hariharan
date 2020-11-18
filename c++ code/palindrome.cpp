#include<iostream>
using namespace std;
class Palin
{
    int n,num,rem,rev=0;
    public :void display()
    {
        cout<<"Enter a positive number:"<<endl;
        cin>>num;
        n=num;
        do
        {
           rem=num%10;
           rev=(rev*10)+rem;
           num=num/10;
        }while (num!=0);

            cout<<"Reverse of the number is :"<<rev<<endl;

        if(n==rev)
        {
            cout<<"Number is a palindrome"<<endl;
        }
        else
            cout<<"Number is not a palindrome"<<endl;
    }
};
int main()
{
    Palin p1;
    p1.display();
}
