#include<iostream>
using namespace std;
class Even
{
    int num;
    public:void display()
    {
     for(num=1;num<=10;++num)
     {
         if(num%2==0)
         {

          cout<<num<<endl; }
     }
    }
};
int main()
{
    Even e1;
    e1.display();
}
