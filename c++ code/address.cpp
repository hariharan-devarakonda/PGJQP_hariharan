#include<iostream>
using namespace std;
int main()
{
    int x;
    int *pt;
    cout<<"Address of variable";
    x=10;
    pt=&x;
    cout<<"Address of x is :"<<&x;
    return 0;
}
