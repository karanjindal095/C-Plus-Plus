#include<iostream>
using namespace std;
class karan
{
    public:
    virtual void print()
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
    karan *ptr;     //pointer of base class
    jindal obj;     //object of derived class
    ptr= &obj;
    ptr->print();   //late binding occurs
    obj.print();    //testing ,which class base or derived function will execute 
    return 0;
}