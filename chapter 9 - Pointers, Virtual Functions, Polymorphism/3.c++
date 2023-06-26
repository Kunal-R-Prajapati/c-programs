#include<iostream>
#include<cmath>

using namespace std;

class shape
{
protected:
public:
    double x,y;
  void getdata(double,double);
  void getdata(double);
  virtual void display_area()
  { }
};
void shape::getdata(double a, double b)
{
    x=a;
    y=b;
}
void shape::getdata(double a)
{
    x=a;
    y=1;
}

class rectangle : public shape
{
private:
    double area;
public:
    void display_area();
};
class triangle : public shape
{
private:
    double area;
public:
    void display_area();
};
class circle : public shape
{
private:
    double area;
public:
    void display_area();
};
void rectangle::display_area()
{
    area = x*y;
    cout<<"Area of Rectangle = "<<area<<endl;
}/*
void triangle::display_area()
{
    area = (x*y)*(0.5);
    cout<<"Area of Trinagle = "<<area<<endl;
}*/
void circle::display_area()
{
    area = 3.141 * pow(x,2);
    cout<<"Area of Circle of radius "<<x<<" = "<<area<<endl;
}
int main()
{
    shape *sh;
    rectangle r;
    triangle t;
    circle c;
    double a,b;
    cout<<"Enter value of x and y \n";
    cin>>a>>b;
    r.getdata(a,b);
    t.getdata(a,b);
    c.getdata(a);
    sh = &r;
    cout<<"Pointer referring to rectangle ...\n";
    sh->display_area();
    sh = &t;
    cout<<"Pointer referring to triangle ...\n";
    sh->display_area();
        sh = &c;
    cout<<"Pointer referring to circle ...\n";
    sh->display_area();
    return 0;
}