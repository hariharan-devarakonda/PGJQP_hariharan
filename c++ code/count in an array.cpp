#include<iostream>
using namespace std;
class number
{
    int arr[100],i,n,odd=0,even=0;
    public:void display()
    {
        cout<<"Enter size of an array:";
        cin>>n;
        cout<<"Enter elements of an array:\n";
        for(i=0;i<n;i++){
        cin>>arr[i];
        }

        for(i=0;i<n;i++)
        {
            if(arr[i]%2!=0)
            {
                odd++;
            }
            else
            {
                even++;
            }
        }
        cout<<"\nNo.of even numbers in an array:"<<even<<endl;
        cout<<"\nNo.of odd numbers in an array:"<<odd<<endl;
    }
};
int main()
{
    number n;
    n.display();
}
