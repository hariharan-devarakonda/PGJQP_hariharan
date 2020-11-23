#include<iostream>
using namespace std;
class overloading
{
    public:
        int demofunction(int i)
        {
        return i;
        }
        double demofunction(double d)
        {
            return d;
        }
};
int main()
{
    overloading obj;
    cout<<obj.demofunction(10)<<endl;
    cout<<obj.demofunction(8.8)<<endl;
    return 0;
}
