#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
int main()
{
    float p{1000},v,r{0.10};
    int n{1};
    cout<<setw(10)<<"Principal"<<setw(10)<<"Rate"<<setw(15)<<"Time(in years)"<<setw(13)<<"Value"<<endl;
    //cout<<setprecision(2);
    for (int i = 0; i < 10; i++,p = p+1000,r=r+0.01,n++)
    {
        v = p * pow( (1+r),n);
        cout<<setw(10)<<p<<setw(10)<<r<<setw(10)<<n<<setw(17)<<v<<endl;
    }
    return 0;
}