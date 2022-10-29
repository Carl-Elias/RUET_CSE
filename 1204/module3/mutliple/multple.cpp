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
private:
    int p = 4;

protected:
    int q = 5;

public:
    int r = 3;
};

class C : public B
{
public:
    int gety() { return y; }
    int getz() { return z; }
};

int main()
{
    C test;
    cout << "protected y = " << test.gety() << endl;
    cout << "protected z = " << test.getz() << endl;
}