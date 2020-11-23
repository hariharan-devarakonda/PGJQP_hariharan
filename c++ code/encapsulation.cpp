#include<iostream>
using namespace std;
class encap
{
    int a;
public:
    void set(int b)
    {
        a=b;
    }
    int get()
    {
       return a;
    }
};
int main()
{
    encap e1;
    e1.set(8);

        cout<<e1.get();
    return 0;
}
