#include <iostream>
using namespace std;
int a=0;
class A
{
public:
    A()
    {
        cout << "object " << ++a << " created" << endl;
    }
    ~A()
    {
        cout << "object " << a-- << " deleted" << endl;
    }
};
int main()
{
    A obj;
    A obj2;
    A obj3;
    return 0;
}