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
    B()
    {
        // x = 11;
        y = 22;
        z = 33;
    }
    // int getx() { return x; }
    int gety() { return y; }
    int getz() { return z; }
};

int main()
{
    B test;
    cout << "protected y = " << test.gety() << endl;
    cout << "protected z = " << test.getz() << endl;
}