#include <iostream>
using namespace std;
int main()
{
    int sum;
    int arr[10];
    cout << "Enter the marks of 6 subject : ";
    for (int n = 1; n <= 6; n++)
    {
        cin >> arr[n];
        sum = sum + arr[n];
    }
    cout << "Total marks = " << sum;
    return 0;
}