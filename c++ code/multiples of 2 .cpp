#include<iostream>
using namespace std;
class multiples
{
    int array[10];
    public :void accept()
    {
        cout<<"Enter the values in array:";
        for(int index=0;index<5;++index)
            {
            cin>>array[index];
        }
    }
    void display()
    {
        cout<<"The values in array are:"<<endl;
        for(int index=0;index<5;index++)
        {
            cout<<array[index]*2<<endl;
        }
    }
};
int main()
{
    multiples m1;
    m1.accept();
    m1.display();
}
