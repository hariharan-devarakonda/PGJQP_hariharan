#include<iostream>
using namespace std;
class vowel
{
    char ch;
    public:void display()
    {
        cout<<"Enter a character:";
        cin>>ch;
        if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
        {
            cout<<"Its an vowel";
        }
        else{
            cout<<"Not an vowel";
        }
    }
};
int main()
{
    vowel v1;
    v1.display();
}
