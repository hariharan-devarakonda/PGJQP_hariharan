#include<iostream>
using namespace std;
class abstr
{
    int num;
    char ch;
public :
    void accept(int n, char c)
    {
    num=n;ch=c;
    }
    void display()
    {
        cout<<"Number is :"<<num<<endl;
        cout<<"character is:"<<ch<<endl;
    }
};
int main()
{
    abstr a1;
    a1.accept(8,'h');
    a1.display();
}
