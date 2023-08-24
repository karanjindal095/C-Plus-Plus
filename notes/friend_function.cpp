#include<iostream>
using namespace std;
class karan
{
   string tv;
   public:
   void sports()
   {
    tv="ipl 2023";
   }
   friend void jatin(karan r);
};
void jatin(karan r)
{
    cout<<"watching cricket "<<r.tv;
}
int main()
{
    karan obj;
    obj.sports();
    jatin(obj);
    return 0;
}