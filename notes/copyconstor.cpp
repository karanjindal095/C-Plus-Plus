#include <iostream>
using namespace std;
class A
{
    int x, y;

public:
    A(int a, int b)
    {
        x = a;
        y = b;
        cout << x << "\t" << y << endl; 
    }
    A(A &ref)
    {
        x = ref.x;
        y = ref.y;
        cout << x << "\t" << y << endl;
    }
};
int main()
{
    A obj(105, 505);
    A obj2 = obj;
    return 0;
}