// MU
#include <iostream>
using namespace std;

class A
{
private:
    int x = 1;

protected:
    int y = 2;

public:
    int z = 3;
};
class B : virtual public A
{
};
class C : virtual public A
{
};
class D : public B, public C
{
public:
    // int getx() { return x; }
    int gety() { return y; }
    int getz() { return z; }
};

int main()
{
    D test;
    cout << "protected y = " << test.gety() << endl;
    cout << "public z = " << test.getz() << endl;
}