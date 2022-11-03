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
public:
    // int getx() { return x; }
    int gety()
    {
        y = 33;
        return y;
    }
    int getz() { return z; }
};
class C : virtual public A
{
public:
    // int getx() { return x; }
    int gety()
    {
        y = 66;
        return y;
    }
    int getz() { return z; }
};
class D : public B, public C
{
};

int main()
{
    D test;
    cout << "protected y = " << test.B::gety() << endl;
    //     cout << "protected y =" << test.C::gety() << endl;
}