#include<iostream>
#include<string>
using namespace std;
class Ticket
{
public:
    string PName;
    int PNR, Age,Seats[100];
    int x;
    char print;
    void booking()
    {
        cout<<"Enter Name";
        cin>>PName;
        cout<<"Enter Age";
        cin>>Age;
        for(x=0;x>=1;x)
        {
            Seats[x]=x+1;
            cout<<"PNR number is"<<x+1;
        }

    }
    void status()
 {
     cout<<"Enter PNR number";
     cin>>PNR;
     for(x=1;x<100;x++)
     {
         if(Seats[x]==PNR)
         {

          cout<<"Print your ticket";
          cin>>print;
           if(x>=1)
           {
               cout<<"Your ticket is confirm";}

          }
          else
                cout<<"Your ticket is in waiting list";

     }
 }
  void print1()
  {
      cout<<"print your ticket";
  }
};

int main()
{
    Ticket t;
    t.booking();
    t.status();
    t.print1();
}
