#include<iostream>
using namespace std;
class Switch
{
    int choice;
    public: void display()
    {
        cout<<"Enter  your choice 1.sunday 2.monday 3.tuesday 4.wednesday 5.thursday 6.friday 7.saturday"<<endl;
        cin>>choice;
        switch (choice)
        {
            case 1: cout<<"sunday"<<endl;break;
            case 2:cout<<"monday"<<endl;break;
            case 3:cout<<"tuesday"<<endl;break;
            case 4:cout<<"wednesday"<<endl;break;
            case 5:cout<<"thursday"<<endl;break;
            case 6:cout<<"friday"<<endl;break;
            case 7:cout<<"saturday"<<endl;break;
            default: cout<<"Enter valid choice";

        }
    }
};
int main()
{
    Switch s1;
    s1.display();
}
