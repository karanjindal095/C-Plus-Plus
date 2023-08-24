#include<iostream>
using namespace std;
class karan
{
    public:
    void print()
    {
        cout<<"good morning"<<endl;
    }
};
class jindal: public karan
{
    public:
    void print()
    {
        cout<<"good night"<<endl;
    }
};
int main()
{
    jindal obj;
    obj.print();
    obj.karan::print();
    return 0;
}