#include<iostream>
using namespace std;
class zero
{
    int arr[50],i,n,zero=0,positive=0,negative=0;
    public:void display()
    {
        cout<<"Enter  size of an array:";
        cin>>n;
        cout<<"Enter the Element:";
        for(i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        for(i=0;i<n;i++)
        {
            if(arr[i]>0)
                positive++;
            else if(arr[i]<0)
                negative++;
            else
                zero++;
        }
        cout<<"\nPositive no. is:"<<positive;
        cout<<"\nNegative no.is:"<<negative;
        cout<<"\nNo.of Zero's are:"<<zero;
    }

};
int main()
{
    zero z1;
    z1.display();
}
