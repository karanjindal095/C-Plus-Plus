#include<iostream>
using namespace std;
class demo
{
    int a;
    public:
    void set(int a)
    {
      this-> a = a;
    // Here this pointer is used to assign a class level 'a' with the argument 'a'
    }
    void get()
    {
        cout<<"value is "<<a;
    }
};
int main()
{
    demo obj;
    obj.set(5);
    obj.get();
    return 0;
}