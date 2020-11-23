#include<iostream>
using namespace std;
class specific
{
    int arr[20],n,i,num;
    public:void display()
    {
        cout<<"Enter a number of elements :";
        cin>>n;
        for(i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        for(i=0;i<n;i++)
        {
            if(arr[i]==num)
            {
                cout<<"Element found at index"<<i;
            }
            else
            {
                cout<<"Element  not found ";
            }
        }

    }
};
int main()
{
    specific s1;
    s1.display();
}
