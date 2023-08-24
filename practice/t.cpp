#include<iostream>
using namespace std;
int main()
{
int n,*p;
cout<<"Enter array size:";
cin>>n;
p=new int[n];
cout<<"Enter list of integers"<<endl;
for(int i=0;i<n;i++)
cin>>p[i];
//logic for summation
int s=0;
for( int i=0;i<n;i++)
s=s+p[i];
cout<<"Sum of array elements is\n";
cout<<s;
delete [ ]p;
return 0;
}