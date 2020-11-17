#include<iostream>
using namespace std;
class Alpha
{
    char a;
    public :void display()
    {
        cout<<"Display the alphabets from A to Z"<<endl;
        for(a='A';a<='Z';a++)
        {
            cout<<a<<endl;
        }
    }
};
int main()
{
    Alpha a2;
    a2.display();
}
