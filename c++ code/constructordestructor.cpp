#include<iostream>
#include<string.h>
using namespace std;
class student
{
private:
char name [20];
int roll;
float height, weight;
public:student ()
{
strcpy (name, "HARI");
roll=14;
height=155;
weight=70;
}
void display ()
{
cout<<"\n name :"<< name<<endl;
cout<<"\n roll no"<<roll<<endl;
cout<<"\n Height"<<height<<endl;
cout<<"\n weight"<<weight<<endl;
}
  ~ student ()
{
cout<<"\n destroying object";
}
};
int main ()
{
student s1;
s1.student();
}
