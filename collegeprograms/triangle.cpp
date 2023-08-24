 #include<iostream>
#include<cmath>
using namespace std;
class triangle
{
    public:
    // area of right angle tringle
    double areaoftri(double base , double height)
    {
        return 0.5*base*height;
    }
    // area of equilateral triangle
    double areaoftri(double side)
    {
        return (sqrt(3)/4)*side*side;
    }
    // area of isoceles triangle
    double areaoftri(int side, int height)
    {
        return 0.5*side*height;
    }
};
int main()
{
    triangle t;
    float base,height,side;
    cout<<"\tFor right angle tringle"<<endl;
    cout<<"Enter base and height : "<<endl;
    cin>>base>>height;
    cout<<"Area of ryt triangle: "<<t.areaoftri(base,height)<<endl;
    cout<<"\tFor equilateral tringle"<<endl;
    cout<<"Enter the side : "<<endl;
    cin>>side;
    cout<<"Area of equilateral triangle: "<<t.areaoftri(side)<<endl;
    cout<<"\tFor isoceles tringle"<<endl;
    cout<<"Enter side and height : "<<endl;
    cin>>side>>height;
    cout<<"Area of isoceles triangle: "<<t.areaoftri(side,height)<<endl;

    return 0;
}