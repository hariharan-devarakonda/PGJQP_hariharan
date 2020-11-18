#include<iostream>
using namespace std;
class Bill
{
    int phn;
    char FirstName[30];
    char LastName[30];
    char City[20];
    public:
        void accept()
    {
        cout<<"Enter customer details:"<<endl;
        cout<<"FirstName,LastName,City,PhoneNumber:"<<endl;
        cin>>FirstName>>LastName>>City>>phn;
    }
    void display()
    {
        cout<<"\nFirstName:"<<FirstName<<"\tLastName:"<<LastName<<endl;
        cout<<"\nCity:"<<City<<"\tPhoneNumber:"<<phn<<endl;
        cout<<endl;
    }
};
int main()
{
    Bill b1;
    b1.accept();
    b1.display();
}
