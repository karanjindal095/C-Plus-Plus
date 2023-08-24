#include <iostream>
using namespace std;
class A
{
    public:
    A(int a, int b)
    {
        cout<<a<<endl<<b;
    }
};
int main()
{
    A obj(100,500);
    return 0;
}
