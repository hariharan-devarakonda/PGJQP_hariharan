#include<iostream>
using namespace std;
class leap
{
    int year;
    public :void display()
    {
        cout<<"enter a year:";
        cin>>year;
        if(year%4==0)
        {
            cout<<"Its a leap year";
        }
        else {
            cout<<"Not a leap year";
        }
    }
};
int main()
{
    leap l1;
    l1.display();
}
