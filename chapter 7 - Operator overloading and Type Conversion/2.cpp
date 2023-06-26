#include<iostream>
#include<cmath>
using namespace std;
class Polar
{
private:
    double r,a;
public:
    Polar();
    Polar(double, double);
    Polar operator+(Polar);
    void display();
};

Polar::Polar()
{
    r = a = 0;
}
Polar::Polar(double radius,double angle)
{
    r = radius;
    a = angle;
}
Polar Polar::operator+(Polar p)
{
    Polar temp;
    temp.r = sqrt((r*r) + (p.r * p.r) + 2*(r * p.r * cos(p.a - a)));
    temp.a = (p.a - a)*0.5;
    return temp;
}
void Polar::display()
{
    cout<<"Radius (r) = "<<r<<"\nAngle (a) = "<<a;
}
int main()
{
    Polar p1,p2,p3;
    double x,y;
    cout<<"Enter the Polar coordinates of 1st point : ";
    cin>>x>>y;
    p1 = Polar(x,y);
    cout<<"Enter the Polar coordinates of 2nd point : ";
    cin>>x>>y;
    p2 = Polar(x,y);
    cout<<endl;
    p3 = p1 + p2 ;
    cout<<"Addition of entered polar coordinates \n";
    p3.display();
}