#include<iostream>
using namespace std;
int main()
{
    int num1,num2,*pt1,*pt2,sum=0;
    cout<<"Enter two numbers:";
    cin>>num1>>num2;
    pt1=&num1;
    pt2=&num2;
    sum=*pt1+*pt2;
    cout<<"Sum of two pointer value is :"<<sum;
    return 0;
}
