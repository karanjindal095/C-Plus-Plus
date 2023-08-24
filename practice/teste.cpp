#include<iostream>
using namespace std;
class b1
{
    protected:
    int a,b,c;
    public:
    void input()
    {
        cout<<"enter the value of two numbers : ";
        cin>>a>>b;
    }
    void add()
    {
        c = a+b;
        cout<<"sum is "<<c<<endl;
    }
};
class b2: public b1
{
    public:
    void subtract()
    {
        c = a - b;
        cout<<"sub is "<<c<<endl;
    }
};
class b3: public b2
{
    public:
    void mul()
    {
        c = a*b;
        cout<<"multiply is "<<c<<endl;
    }
};
int main()
{
    b3 o;
    o.input();
    o.add();
    o.subtract();
    o.mul();
    return 0;
}