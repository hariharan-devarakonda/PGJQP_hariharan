#include<iostream>
using namespace std;
int main()
{
        int arr[100], size, i, j, n;
        cout<<"\n Enter Array Size : ";
        cin>>size;
        cout<<"\n Enter Array Elements : \n";
        for(i=0; i<size; i++)
        {
                cin>>arr[i];
        }


        j=i-1;
        i=0;
        while(i<j)
        {
                n=arr[i];
                arr[i]=arr[j];
                arr[j]=n;
                i++;
                j--;
        }
        cout<<"\n\n Reverse Array Elements : \n\n";
        for(i=0; i<size; i++)
        {
                cout<<arr[i]<<"\t";
        }
        return 0;
}
