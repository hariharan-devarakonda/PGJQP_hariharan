#include<iostream>
using namespace std;
class demo
{
    public:static void print_Msg()
    {
        cout<<"Welcome home solider";
    }
};
int main()
{
    demo::print_Msg();  //invoking static function
}
