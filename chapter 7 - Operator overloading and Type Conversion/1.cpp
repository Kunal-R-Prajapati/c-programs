#include<iostream>
using namespace std;
class FLOAT
{
private:
    float a ;
public:
    FLOAT()
    {
        a = 0;
    }
    FLOAT(float f)
    {
        a = f;
    }
    FLOAT operator+(FLOAT);
    FLOAT operator-(FLOAT);
    FLOAT operator/(FLOAT);
    FLOAT operator*(FLOAT);
    friend ostream & operator << (ostream &, FLOAT &);
    friend istream & operator >> (istream &, FLOAT &);
};
FLOAT FLOAT::operator+(FLOAT b)
{
    return a+b.a;
}
FLOAT FLOAT::operator-(FLOAT b)
{
    return a - b.a;
}
FLOAT FLOAT::operator/(FLOAT b)
{
    return a/b.a;
}
FLOAT FLOAT::operator*(FLOAT b)
{
    return a*b.a;
}
ostream & operator << (ostream &dout, FLOAT &b)
{
    dout<<" "<<b.a;
    return (dout);
}
istream & operator >> (istream &din, FLOAT &b)
{
    din >> b.a;
    return (din);
}
int main()
{
    FLOAT a,b,c;
    cout<<"Enter the Floating numbers : ";
    cin>>a;
    cin>>b;
    c = a+b;
    cout<<"a + b = " << c<<"\n";
    c= a -b;
    cout<<"a - b = " << c<<"\n";
    c = a * b;
    cout<<"a * b = " << c<<endl;
    c = a / b;
    cout<<"a / b = " << c<<endl;
    return 0;
}