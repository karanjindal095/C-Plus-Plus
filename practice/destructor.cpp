#include<iostream>
using namespace std;
int count = 0;
class A
{
   public:
   A()
   {
    cout<<"object created "<<++count<<endl;
   }
   ~A()
   {
    cout<<"object deleted "<<count--<<endl;
   }


};
int main()
{
    A obj , obj1 , obj2;
    return 0;
}