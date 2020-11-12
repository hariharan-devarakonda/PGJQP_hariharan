#include<iostream>
using namespace std;
class Employee
{
 int e_id;
 char name[10];
 float salary;
 public :void accept()
 {
     cout<<"Enter  employee name:\n";
     cin>>name;
     cout<<"Enter id:\n";
     cin>>e_id;
     cout<<"Enter salary:\n";
     cin>>salary;

 }
 void display()
 {
     cout<<"Employee name:"<<endl;
     cout<<"Employee id:"<<e_id<<endl;
     cout<<"Employee salary:"<<salary<<endl;
 }
};
int main()
{
    Employee a1,a2;
    a1.accept();
    a2.accept();
    a1.display();
    a2.display();
}
