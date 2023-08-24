#include <iostream>
using namespace std;
int a = 5;
int main()
{
    int a = 10;
    cout << "local a = " << a << endl;
    cout << "global a = " << ::a;
    return 0;
}