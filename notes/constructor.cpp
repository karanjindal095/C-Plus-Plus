#include <iostream>
using namespace std;
class constructor
{
    int a, b;

public:
    constructor()
    {
        a = 100;
        b = 200;
        cout << a << endl << b;
    }
};
int main()
{
    constructor obj;
    return 0;
}
