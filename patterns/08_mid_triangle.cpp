#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter no: ";
    cin>>n;
    
    int row = 1;
    while (row<= n)
    {
        //* print spaces tri (1)
        int space = n - row;
        while (space)
        {
            cout<<" ";
            space = space-1;
        }

        //* print tri (2)
        int col = 1;
        while (col <= row)
        {
            cout<<col;
            col = col + 1;
        }

        //* print tri (3)
        int col2 = row - 1;
        while (col2)
        {
            cout<<col2;
            col2 = col2 - 1;
        }

        cout<<endl;
        row = row + 1;
    }
      
    return 0;
}