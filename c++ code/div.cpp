#include<iostream>
using namespace std;
class divide
{
    int divisor, dividend, quotient, remainder;
    public: void display()
    {
        cout<<"Enter divisor:";
        cin>>divisor;
        cout<<"Enter dividend:";
        cin>>dividend;

        quotient=dividend/divisor;
        remainder=dividend%divisor;
        cout<<"Quotient is:" <<quotient<<"\n";
        cout<<"Remainder is :"<<remainder;
    }
};
int main()
{
    divide d1;
    d1.display();
}
