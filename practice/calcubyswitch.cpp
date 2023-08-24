#include <iostream>
using namespace std;
int main()
{
    int x, y;
    char op;
    cout << "Enter the first number : ";
    cin >> x;
    cout << "Enter the expression : ";
    cin >> op;
    cout << "Enter the second number : ";
    cin >> y;
    switch (op)
    {
    case '+':
        cout << x << "+" << y << "=" << x + y;
        break;
    case '-':
        cout << x << "-" << y << "=" << x - y;
        break;
    case '*':
        cout << x << "*" << y << "=" << x * y;
        break;
    case '%':
        cout << x << "%" << y << "=" << x % y;
        break;
    case '/':
        cout << x << "/" << y << "=" << x / y;
        break;
    default:
        cout << "invalid operator" << endl;
    }
    return 0;
}