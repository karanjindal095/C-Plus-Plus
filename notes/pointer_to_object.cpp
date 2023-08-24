#include<iostream>
using namespace std;
class item
{
   int a,b,c;
   public:
   void getdata()
   {
    cout<<"Enter the numbers : "<<endl;
    cin>>a>>b;
   }
   void show()
   {
    c=a+b;
    cout<<"sum is "<<c;
   }

};
int main()
{
    item obj;
    item *ptr;
    ptr = &obj;
    ptr->getdata();
    ptr->show();
    return 0;
}