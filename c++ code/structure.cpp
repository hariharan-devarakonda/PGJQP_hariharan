#include<iostream>
#include<string.h>
using namespace std;
struct student
{   int id;
    char name[50];
} ;
int main( )
{
    struct student s1;
   s1.id=14;
   strcpy(s1.name, "HariHaran Devarakonda");
   cout<<"student 1 id :"<<s1.id<<endl;
   cout<<"student 1 name :"<<s1.name<<endl;;
return 0;
}
