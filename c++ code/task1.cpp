#include<iostream>
using namespace std;
class Task
{
 int num,x;
 public: int display()
 {
     cout<<"Enter number:";
     cin>>num;
     return num+1;
 }
};
int main()
{
    Task t1;
    cout<<t1.display();
}
