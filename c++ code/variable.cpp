#include<iostream>
using namespace std;
class Datatype
{
    int n1;
    float f2;
    char c3;
    public : void display()
    {
        cout<<"Enter integer number";
        cin>>n1;
        cout<<"Enter float number";
        cin>>f2;
         cout<<"Enter the character";
        cin>>c3;
    }

};
int main()
{
    Datatype d1;
    d1.display();
}
