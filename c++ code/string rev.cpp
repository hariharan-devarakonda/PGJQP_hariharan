#include<iostream>
using namespace std;

int i;
    void reverse(string str)
    {
        for(i=str.length()-1;i>0;i--)
            cout<<str[i];
    }
int main(void)
{
    string s="HariHaran";
    reverse(s);
    return 0;
}
