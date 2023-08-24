#include <iostream>
using namespace std;
class A
{
public:
    virtual void get()=0;
};
class B : public A
{
public:
    void get()
    {
        cout << "good night" << endl;
    }
};

int main()
{
    A *ptr;
    B obj;
    ptr= &obj;
    ptr->get();
    return 0;
}