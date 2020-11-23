#include<iostream>
#include<math.h>
using namespace std;
class Power
{
  public: float calculate(float exponent,float base)
  {
      return pow(base,exponent);
  }
};
int main()
{
    float exponent,base;
    cout<<"Enter base:"<<endl;
    cin>>base;
    cout<<"Enter exponent:"<<endl;
    cin>>exponent;
    Power p1;
    cout<<p1.calculate(exponent,base)<<endl;
}
