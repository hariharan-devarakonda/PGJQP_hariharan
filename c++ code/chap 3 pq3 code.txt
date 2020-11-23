#include<iostream>
using namespace std;
class worker
{
private:
char wrkname[25];
float hrwrked;
float wagerate;
float totalwage;
float calcwage()
{
float Total;
Total=hrwrked*wagerate;
return(Total);
}
public:
void accept()
{
cout<<"enter name";
cin>>wrkname;
cout<<"enter hour worked";
cin>>hrwrked;
cout<<"enter wage rate";
cin>>wagerate;
totalwage=calcwage();
}
void display()
{
cout<<"name: "<<wrkname<<endl;
cout<<"hours worked: "<<hrwrked<<endl;
cout<<"wage rate: "<<wagerate<<endl;
cout<<"total wage:"<<totalwage<<endl;
}
};
int main()
{

    worker y1;
    y1.accept();
    y1.display();
}
