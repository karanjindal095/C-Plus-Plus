#include <iostream>
using namespace std;
class A
{
protected:
    int a, b, c;

public:
    void inputdata()
    {
        cout << " enter the values " << endl;
        cin >> a >> b;
    }
    void sum()
    {
        c = a + b;
        cout << "sum is " << c << endl;
    }
};
class B : public A
{
public:
    void sub()
    {
        c = a - b;
        cout << " sub " << c << endl;
    }
};
int main()
{
    B obj;
    obj.inputdata();
    obj.sum();
    obj.sub();
    return 0;
}
