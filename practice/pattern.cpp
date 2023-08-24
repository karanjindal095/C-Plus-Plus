#include<iostream>
using namespace std;

int main()
{
    int b;
    cout<<"enter no: ";
    cin>>b;
    for (int i = 0; i <b; i++)
    {
        for (int j = 0; j <= i; j++)
        {
           cout<<"*";
        }
        cout<<endl;
    }
    
    return 0;
}