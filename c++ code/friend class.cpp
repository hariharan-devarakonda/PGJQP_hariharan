#include <iostream>
using namespace std;
class Y;

class X
{
	int value;
	public:
		X()
		{
			value = 5;
		}
		friend int mul(X,Y);
};

class Y
{
	int value;
	public:
		Y()
		{
			value = 10;
		}
		friend int mul(X, Y);
};

int mul( X v1, Y v2 )
{
	return (v1.value*v2.value);
}

int main()
{
	X obj1;
	Y obj2;
	cout << "Product is : " << mul( obj1, obj2 ) << endl;
	return 0;
}
