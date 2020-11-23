#include<iostream>
using namespace std;
class second_highest
{
    int n,i,num[30],highest,second;
    public:void display()
    {
    cout<<"Enter the array elements:";
    cin>>n;
    for(i=0;i<n;i++)
       {
           cout<<"Enter the array element";
           cin>>num[i];

       }
       if(num[0]<num[1])
       {
           highest=num[1];
           second=num[0];
       }
       else {
        highest=num[0];
        second=num[1];
       }
       for(i=2;i<n;i++)
       {
           if(num[i]>highest)
           {
               second=highest;
               highest=num[i];
           }
           else
            if(num[i]>second && num[i]!=highest)
           {
               second=num[i];
           }
       }
       cout<<"Second highest element in array is:"<<second;
    }
};
int main()
{
    second_highest s1;
    s1.display();
}
