#include <iostream>
using namespace std;
int a=1;
class A
{   
    
    public:
    A()
    {
        
        cout << "object created" << a++ <<endl;
        
    }
    ~A()
    {
        
        cout << "object destroyed"<< --a << endl;
    }
};
int main()
{
    A obj;
    A obj2;
    A obj3;
    return 0;
}

