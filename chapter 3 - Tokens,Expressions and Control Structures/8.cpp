#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
int main()
{
    float e;
    cout<<endl;
    cout<<"X\t";
    for (float i = 0.0; i < 1.0; i += 0.1)
    {
        cout<<setw(15)<<i;
    }
    cout<<endl;
    cout<<setprecision(6);
    for (float i = 0.0; i < 10; i+= 1.0)
    {
        cout<<i<<"\t";
        for (float j = 0.0; j < 1.0; j += 0.1)
        {
            cout<<setw(15)<<exp(-(i+j));
        }
        cout<<endl;
    }
    
    return 0;
}
