#include<iostream>
#include<stdlib.h>
using namespace std;

int main(char argc,char *argv[])
{
    int num1,num2;
    cout<<"Enter any two numbers:"<<endl;
    cin>>num1>>num2;
    num1=atoi(argv[1]);
    num2=atoi(argv[2]);
    if(num1>num2)
        cout<<"num1 is greater than num2"<<num1<<num2<<endl;
    else
        cout<<"num2 is greater than num1"<<num2<<num1<<endl;
}
