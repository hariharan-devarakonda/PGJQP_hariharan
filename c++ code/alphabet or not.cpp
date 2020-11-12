#include<iostream>
using namespace std;
class alphabet
{
    char ch;
    public :void display()
    {
        cout<<"Enter a character:";
        cin>>ch;
        if ((ch>='a'&&ch<='z')||(ch>='A'&&ch<='Z'))
        {
            cout<<"Its an alphabet";
        }
        else {
            cout<<"Not an alphabet";
        }
    }
};
int main()
{
    alphabet a1;
    a1.display();
}
