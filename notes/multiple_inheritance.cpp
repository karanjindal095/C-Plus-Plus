#include<iostream>
using namespace std;
class AAYUSHI
{
    protected:
    int a,b,sum;
    public:
    void getdata()
    {
        cout<<"Enter first two numbers : "<<endl;
        cin>>a>>b;
    }
   
};
class KARAN
{
    protected:
    int x,y,sub;
    public:
    void gotdata()
    {
        cout<<"Enter second two numbers : "<<endl;
        cin>>x>>y;
    }
   
};
class derived : public AAYUSHI ,public KARAN
{
    public:
    void add()
    {
        sum = a+b+x+y;
        cout<<"sum is :"<<sum<<endl;
    }
    void minus()
    {
        sub = a-b-x-y;
        cout<<"subtraction is :"<<sub<<endl;
    }
};
int main()
{
    derived obj;
    obj.getdata();
    obj.gotdata();
    obj.add();
    obj.minus();
    return 0;
}