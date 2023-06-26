#include<iostream>
using namespace std;
int main()
{
    float f , c;
    cout << "Enter temperature in fahrenheit : " ;
    cin >> f;
    c = (f - 32) * (5.0/9.0);
    cout << "Celcius Equivalent of "<< f <<"degree F "<<" is : "<< c << "   degree C"<<endl;
    return 0;
}