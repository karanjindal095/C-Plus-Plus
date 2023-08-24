#include<iostream>
using namespace std;
class student
{
    protected:
    int rollno;                     //exam, result- marks scored in 5 sybject, total avg
    char name[20];
    public:
    void data()
    {
        cout<<"Enter the name of the student : ";
        cin>>name;
        cout<<"Enter the roll no. of the student : ";
        cin>>rollno;
    }
};
class exam : public student
{
    protected:
    int marks[7];
    public:
    void subm()
    {
    cout<<"Enter the Marks scored in 5 subjects : ";
    for(int i=1;i<=5;i++)
    {
      cin>>marks[i];
    }
    }
};
class result: public exam
{
    protected:
    int total=0;
    float avg;
    public:
    void arith()
    {
        for(int i=1;i<=5;i++)
        {
        total=total+marks[i];
        }
         cout<<"Total marks scored : "<<total<<endl;
        avg = total/5;   
        cout<<"Average marks : "<<avg<<endl;
    } 
};
int main()
{
    result x;
    x.data();
    x.subm();
    x.arith();
    return 0;
}