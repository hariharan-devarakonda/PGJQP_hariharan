#include<iostream>
using namespace std;
class vote
{
    int age;
    public :void display()
    {
        cout<<"Enter your age:";
        cin>>age;
        if(age>=18)
        {
            cout<<"Your eligible for voting";
        }
        else{
            cout<<"Your not eligible for voting";
        }
    }
};
int main()
{
    vote v1;
    v1.display();
}
