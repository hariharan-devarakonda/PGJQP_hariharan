#include<iostream>
using namespace std;
class Size
{
    int integerType;
    char characterType;
    float floatType;
    double doubleType;
    public :void display()
    {
         printf ("Size of int is: %ld\n",
        sizeof (integerType));
         printf("Size of char is: %ld\n",
        sizeof (characterType));
         printf("Size of float is: %ld\n",
        sizeof (floatType));
         printf("Size of double is: %ld\n",
        sizeof (doubleType));
    }

};
int main()
{
    Size s1;
    s1.display();
}
