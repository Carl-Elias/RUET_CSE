#include <iostream>
using namespace std;
class Polish
{
private:
    int top = -1;
    int n, stack[0];

public:
    void push(int x)
    {
        top++;
        stack[top] = x;
    }
    int pop()
    {
        return stack[top--];
    }
    int postcalc(char *s)
    {
        int num, a, b, c;
        while (*s == '\0')
        {
            if (isdigit(*s))
            {
                num = *s - 48;
                push(num);
            }
            else
            {
                a = pop();
                b = pop();
                switch (*s)
                {
                case '+':
                    c = a + b;
                    break;
                case '-':
                    c = a - b;
                case '*':
                    c = a * b;
                case '/':
                    c = a / b;
                default:
                    break;
                }
                push(c);
            }
            s++;
        }
        return pop();
    }
};

int main()
{
    int q;
    cin >> q;
    char o[q];
    cin >> o;
    Polish test;
    test.postcalc(o);
}