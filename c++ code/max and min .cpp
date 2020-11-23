#include<iostream>
using namespace std;
class Niit
{
    int arr[6],n,i,max,min;
    public :void display()
    {
        cout<<"Enter the elements of the array:";
        cin>>n;
        for(i=0;i<n;i++)
            cin>>arr[i];
        max=arr[0];
        for(i=0;i<n;i++)
        {
            if(max<arr[i])
                max=arr[i];
        }
        min=arr[0];
        for(i=0;i<n;i++)
        {
            if(min>arr[i])
                min=arr[i];
        }
        cout<<"Max value is:"<<max<<endl;
        cout<<"Min value is:"<<min<<endl;
    }
};
int main()
{
    Niit n1;
    n1.display();
}
