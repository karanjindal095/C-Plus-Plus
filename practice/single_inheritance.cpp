#include <iostream>
using namespace std;
class m
{
    protected:
    int a, b, c;

public:
    void input()
    {
        cout << "enter the two numbers ";
        cin >> a >> b;
         c = a + b;
        cout << "addition  is = " << c << endl;
    }
};
class k : public m
{
    int num;

public:
    void output()
    {
        num = a * b;
        cout << "multiplication is = "<<num;
    }
};
int main()
{
    k o;
    o.input();
    o.output();
    return 0;
}