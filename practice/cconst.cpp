#include <iostream>
using namespace std;
class A
{
    int a, b;

public:
    A(int x, int y)
    {
        a = x;
        b = y;
        cout << a << endl << b << endl;
    }
    A(A &ref)
    {
        a = ref.a;
        b = ref.b;
        cout << a << endl << b;
    }
};
int main()
{
    A obj(123, 456);
    A obj2 = obj;
    return 0;
}