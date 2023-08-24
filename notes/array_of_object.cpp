#include <iostream>
using namespace std;
class demo
{
    int a;

public:
    void set(int x)
    {
        a = x;
    }
    int get()
    {
        return a;
    }
};
int main()
{
    demo obj[5];
    for (int i = 1; i <= 5; i++)
    {
        obj[i].set(i);
        cout << "obj " << i << " get() " << obj[i].get() << endl;
    }
    return 0;
}