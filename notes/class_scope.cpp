#include <iostream>
using namespace std;
class classscope
{
public:
    void main();
};
void classscope::main()
{
    cout << "Function defined outside the class \n";
};
int main()
{
    classscope obj;
    obj.main();
    return 0;
}
