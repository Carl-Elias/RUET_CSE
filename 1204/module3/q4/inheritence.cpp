#include <iostream>
using namespace std;

class A
{
private:
    int x;

protected:
    int y;

public:
    int z;
};
class B : public A
{
public:
    int getx() { return x; }
    int gety() { return y; }
    int getz() { return y; }
}
