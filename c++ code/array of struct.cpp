#include<iostream>
#include<string.h>
using namespace std;
struct employee
{
    int id;
    char name[30];
    float salary;
};
int main()
{
    int j;
    struct employee details[2];

    details[0].id=1;
    strcpy(details[0].name,"Abhi");
    details[0].salary=25000;


    details[1].id=2;
    strcpy(details[1].name,"Jordan");
    details[1].salary=55000;

     for(j=0; j<2; j++)
     {
         cout<<" Details of Employee :"<<j+1<<endl;
         cout<<" Id is:"<<details[j].id<<endl;
         cout<<" Name is:"<<details[j].name<<endl;
        cout<<" salary is:"<<details[j].salary<<endl;
     }
     return 0;
}
