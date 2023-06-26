#include<iostream>
using namespace std;
int main()
{
    double power(double m, int n=2);
    double m;
    int n;
    cout<<"Enter the number : ";
    cin>>m;
    cout<<"\nEnter the power to raise : ";
    cin>>n;
    cout<<"\nSqaure of "<<m<<" is : "<< power(m)<<endl;
    cout<<"\n"<<m<<" raised to the power "<<n<<" : "<< power(m,n)<<endl;
    return 0;
}
double power(double m, int n)
{
    double pow =1;
    for (int i = 1; i <= n; i++)
    {
        pow *= m;
    }
    return pow;
}