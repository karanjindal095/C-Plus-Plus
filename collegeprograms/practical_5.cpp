#include<iostream>
using namespace std;
class bank
{
    char name[30];
   long long int accno;
   long int wamt,bamt,dept,tb;
    public:
    void inputdata();
    void deposit();
    void withdraw();
    void display();
};
void bank::inputdata()
{
    cout<<"       Enter the A/C holder name : ";
    cin>>name;
    cout<<"               Enter the A/C no. : ";
    cin>>accno;
    cout<<"        Enter the balance amount : ";
    cin>>bamt;
}
void bank::deposit()
{
    cout<<"Enter the amount to be deposited : ";
    cin>>dept;
    tb= bamt+dept;
    cout<<"\n   Total balance After deposit : "<<tb<<endl;
    cout<<endl;
}
void bank::withdraw()
{
    cout<<"Enter the amount to be withdrawn : ";
    cin>>wamt;
    if(bamt<wamt)
    cout<<"\nSorry! insufficient balance...."<<endl;
    else
    cout<<"\nTransaction successful..."<<endl;
    bamt= tb-wamt;
}
void bank::display()
{
    cout<<endl;
    cout<<"         Name of the A/C holder : "<<name<<endl;
    cout<<"                 Balance Amount : "<<bamt;
}
int main()
{
    int n;
    cout<<"Enter the Number of A/C holders : ";
    cin>>n;
    bank b[n];
    for(int i=0;i<n;i++)
    {
      bank b1[i];
      b1[i].inputdata();
      b1[i].deposit();
      b1[i].withdraw();
      b1[i].display();
    }
    return 0;
}