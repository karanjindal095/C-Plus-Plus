// *
// **
// ***
// ****
// *****

#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter no : ";
    cin>>n;
    
    int i = 0;
    while (i <= n)
    {
        int j =1;
        while(j <= i)
        {
            j = j+1;
            cout<<"*";
        }
        cout<<endl;
        i = i +1 ;
    }
    
    return 0;
}