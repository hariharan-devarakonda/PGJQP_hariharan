#include<iostream>
using namespace std;
class upper
{
    char ch;
    public :void display()
    {
        cout<<"Enter a character:";
        cin>>ch;
        if (ch>='A'&&ch<='Z')
        {
            cout<<"character is in upper case";
        }
        else if(ch>='a'&&ch<='z')
            {
            cout<<"character is in lower case";
        }
    }
};
int main()
{
    upper u1;
    u1.display();
}
