#include<iostream>
using namespace std;
class  temperature
{
    float c,f;
    public:
        void getdata(void);
        void calculate(void);
};
void temperature::getdata(void)
{
    cout<<"Enter the temperature in faherenheit : ";
    cin>>f;
}
void temperature::calculate(void)
{
    c = (f - 32) * (5.0/9.0);
    cout << "Celcius Equivalent of "<< f <<" degree F "<<" is : "<< c << " degree C"<<endl;
}

int main()
{
    temperature exp;
    exp.getdata();
    exp.calculate();
}