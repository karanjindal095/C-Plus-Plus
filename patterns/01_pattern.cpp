// 11111
// 22222
// 33333
// 44444
// 55555

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the Number : ";
    cin >> n;

    int i = 1;
    while (i <= n)
    {
        int j = 1;
        while (j <= n)
        {
            cout<<i;
            j = j + 1;
        }
        i = i + 1;
        cout << endl;
    }

    return 0;
}