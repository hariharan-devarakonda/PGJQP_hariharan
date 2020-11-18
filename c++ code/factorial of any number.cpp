#include<iostream>
using namespace std;
class factorial
{
    int i,fact=1,num;
    public :void display()
    {
    cout<<"Enter any number:"<<endl;
    cin>>num;
    for(i=1;i<=num;i++)
    {
        fact=fact*i;
    }
    cout<<"Factorial of number is:"<<fact<<endl;
    }
};
int main()
{
    factorial f1;
    f1.display();
}
