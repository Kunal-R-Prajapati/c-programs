#include<iostream>
#include<cmath>
#include "5.cpp"
using namespace std;
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
    Rectangle(Polar p)
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