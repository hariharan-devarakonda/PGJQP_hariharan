#include<iostream>
using namespace std;
class sorting
{
    int i,arr[10],k,j;
    public:void display()
    {
        cout<<"Enter elements of an array:";
        for(i=0;i<=10;i++)
        {
            cin>>arr[i];
        }
        for(j=0;j<=10;j++)
        {
            cout<<arr[j];
        }
        for(i=0;i<=0;i++)
        {
            for(j=0;j<=0;j++)
            {
                if(arr[i]>arr[j+1])
                {
                    k=arr[j];
                    arr[i]=arr[j+1];
                    arr[j+1]=k;
                }
            }
        }
        cout<<" After sorting an array:";
        for(j=0;j<10;j++)
        {
            cout<<arr[j];
        }
    }
};
int main()
{
    sorting s1;
    s1.display();
}
