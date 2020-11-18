#include<iostream>
using namespace std;
class floyd
{
    int i,j;
    int rows;
    public:void display()
    {
        cout<<"Enter no.of rows:";
        cin>>rows;
        for(i=1;i<=rows;i++)
        {
            for(j=1;j<=i;++j)
            {
                cout<<j<<"";
            }
            cout<<endl;
        }
    }
};
int main()
{
    floyd f1;
    f1.display();
}
