#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter no: ";
    cin >> n;

    int row = 1;
    while (row <= n)
    {
        //* print spaces
        int space = n - row;
        while (space)
        {
            cout << " ";
            space = space - 1;
        }

        //* print star
        int col = 1;
        while (col <= row)
        {
            cout << "*";
            col = col + 1;
        }
        cout << endl;
        row = row + 1;
    }

    return 0;
}