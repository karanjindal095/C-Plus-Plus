#include <iostream>
using namespace std;
class A
{
private:
    int a, b;

public:
    void input()
    {
        cout<<"enter the two numbers: "<<endl;
        cin>>a>>b;
    }
    void show()
    {
        cout<<" A="<<a<<" B="<<b<<endl;
    }
    A operator +(A k)
    {
        A k1;
        k1.a = a + k.a;
        k1.b = b + k.b;
        return(k1);
    }
};
int main()
{
    A k2,k3,sum;
    k2.input();
    k3.input();
    cout<<" sum of the numbers are : "<<endl;
    k2.show();
    k3.show();
    sum = k2 + k3;
    cout<<"____________________ \n"<<endl;
    sum.show();
    cout<<"____________________"<<endl;
    return 0;
}
