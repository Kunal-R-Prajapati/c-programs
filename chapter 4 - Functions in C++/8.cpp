#include<iostream>
using namespace std;
int main()
{
    double power(double m, int n=2);
    int power(int m, int n=2);
    double a;
    int b, n;
    cout<<"Enter the number : ";
    cin>>a;
    b= double(a);
    cout<<"\nEnter the power to raise : ";
    cin>>n;
    cout<<"\nSqaure of "<<a<<" is : "<< power(a)<<endl;
    cout<<"\n"<<b<<" raised to the power "<<n<<" : "<< power(b,n)<<endl;
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
int power(int m, int n)
{
    int pow =1;
    for (int i = 1; i <= n; i++)
    {
        pow *= m;
    }
    return pow;
}