#include<iostream>

using namespace std;

class shape
{
protected:
public:
    double x,y;
  void getdata(double,double);
  virtual void display_area()
  { }
};
void shape::getdata(double a, double b)
{
    x=a;
    y=b;
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
void rectangle::display_area()
{
    area = x*y;
    cout<<"Area of Rectangle = "<<area<<endl;
}
void triangle::display_area()
{
    area = (x*y)*(0.5);
    cout<<"Area of Trinagle = "<<area<<endl;
}

int main()
{
    shape *sh;
    rectangle r;
    triangle t;

    double a,b;
    cout<<"Enter value of x and y \n";
    cin>>a>>b;
    r.getdata(a,b);
    t.getdata(a,b);
    sh = &r;
    cout<<"Pointer referring to rectangle ...\n";
    sh->display_area();
    sh = &t;
    cout<<"Pointer referring to triangle ...\n";
    sh->display_area();
    return 0;
}