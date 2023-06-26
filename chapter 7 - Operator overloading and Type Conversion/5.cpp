#include<iostream>
#include<cmath>
using namespace std;
class Polar
{
private:
    float r ,a;
public:
    Polar()
    {
        r=0;
        a=0;
    }
    Polar(float radius,float angle)
    {
        r = radius;
        a = angle;
    }
    Polar(float x, float y , int a)
    {
        r = sqrt((x*x)+(y*y));
        a = atan((y/x));
    }
    float get_r(){return r;}
    float get_a(){return a;}
    void display()
    {
        cout<<"Polar Coordinates :\nradius = "<<r<<"\nangle = "<<a<<endl;
    }
};
class Rectangle
{
private:
    float x,y;
public:
    Rectangle()
    {
        x = y = 0;
    }
    Rectangle(float x_coordinate,float y_coordinate)
    {
        x= x_coordinate;
        y= y_coordinate;
    }
    Rectangle(Polar &p)
    {
        float r = p.get_r();
        float a = p.get_r();
        x = r*(cos(a));
        y = r*(sin(a));
    }
    float get_x(){return x;};
    float get_y(){return y;};
    void display()
    {
        cout<<"Rectangle Coordinates :\nX = "<<x<<"\nY = "<<y<<endl;
    }
};
int main()
{
    Polar p,p2;
    Rectangle r,r2;
    float x,y;
    cout<<"Enter the Polar coordinates : ";
    cin>>x>>y;
    p = Polar(x,y);
    r2 = Rectangle(p);
    cout<<"Enter the Rectangle Coordinates : ";
    cin>>x>>y;
    r = Rectangle(x,y);
    p2 = Polar(r.get_x(),r.get_y(),1);
    cout<<"*******Conversion********"<<endl;
    cout<<"Set 1\n";
    p.display();
    r2.display();
    cout<<"Set 2\n";
    p2.display();
    r.display();
}