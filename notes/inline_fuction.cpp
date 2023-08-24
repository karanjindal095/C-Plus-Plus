#include<iostream>
using namespace std;
class karan
{
    public:
    inline int mul(int p,int q)
    {
        return (p*q);
    }
    inline float div(float x,float y)
    {
        return (x/y);
    }
};
int main()
{
    karan k;
    cout<<k.mul(10,20)<<endl;
    cout<<k.div(20.0,10.0);
    return 0;
}
