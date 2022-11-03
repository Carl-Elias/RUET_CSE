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
class B
{
private:
    int p = 4;

protected:
    int q = 5;

public:
    int r = 6;
};

class C : public A, public B
{
public:
    // int getx() { return x; }
    // int getp() { return p; }
    int gety() { return y; }
    int getz() { return z; }
    int getq() { return q; }
    int getr() { return r; }
};

int main()
{
    C test;
    cout << "protected y = " << test.gety() << endl;
    cout << "public z = " << test.getz() << endl;
    cout << "protected q = " << test.getq() << endl;
    cout << "public r = " << test.getr() << endl;
}