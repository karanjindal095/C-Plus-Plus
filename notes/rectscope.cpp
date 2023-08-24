#include <iostream>
using namespace std;
class rectangle
{
    int l,b;
public:
    void area();
    int output();
};
void rectangle::area()
{
    cout << "Enter the length = " << endl;
    cin>> l;
    cout << "Enter the breadth = " << endl;
    cin>> b;
};
int rectangle::output()
{
    return l * b;
};
int main()
{
    rectangle r;
    r.area();
    cout << "Area of retangle = " << r.output();
    return 0;
}
