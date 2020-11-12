#include<iostream>
using namespace std;
class joe
{
    int num1,num2,num3;
    public :void accept()
    {
        cout<<"Enter three numbers";
        cin>>num1,num2,num3;


    }
    void display()
    {
        if(num1>num2)
        {
            if(num1>num3)
            {
                cout<<"num1 is greater";
            }
            else
            {
                cout<<"num3 is greater";

            }
        }
        else{
            if(num2>num3)
            {
                cout<<"num2 is greater";
            }
            else
                {
                    cout<<"num3 is  greater";
                }
        }
    }

};
int main()
{
    joe j1;
    j1.accept();
    j1.display();
}
