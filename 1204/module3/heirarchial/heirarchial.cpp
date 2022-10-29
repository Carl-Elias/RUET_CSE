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
class B : public A
{
public:
    // int getx() { return x; }
    int gety() { return y; }
    int getz() { return z; }
};
class C : public A
{
public:
    // int getx() { return x; }
    int gety() { return y; }
    int getz() { return z; }
};

int main()
{
    B b;
    C test;
    cout << "protected y = " << b.gety() << endl;
    cout << "public z = " << b.getz() << endl;
    cout << "protected y = " << test.gety() << endl;
    cout << "public z = " << test.getz() << endl;
}