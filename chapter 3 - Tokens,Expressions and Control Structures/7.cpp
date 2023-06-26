#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    long int factorial(int);
    float sin_x(int x,int n);
    float sum(int x,int n);
    float cos_x(int x,int n);
    float sin = sin_x(2,5),su = sum(2,5),cos = cos_x(2,5);
    cout<<"Sin x = "<<sin<<"\nSum = "<<su<<"\nCos x = "<<cos<<endl;
    return 0;

}
long int factorial(int x)
{
    if (x >1)
    {
        return x*factorial(x-1);
    }
    else if(x == 1||x==0)
    return 1;
    else return 0;
}
float sin_x(int x,int n)
{
    float sin{0};
    int c=1;
    for(int i =1; i<=n;i++,c=c+2)
    {
        if ((c%2) ==0)
        {
            sin -= float(pow(x,c))/factorial(c);
        }
        else
            sin += float(pow(x,c))/factorial(c);
    }
    return sin;
}
float sum(int x,int n)
{
    float su {0};
    for (int i = 1; i <= n; i++)
    {
        su += float(pow((float(1/i)),i));
    }
    return su;
}
float cos_x(int x,int n)
{
    float cos{0};
    int c=0;
    for(int i =1; i<=n;i++,c=c+2)
    {
        if ((c%2) ==0)
        {
            cos -= float(pow(x,c))/factorial(c);
        }
        else
            cos += float(pow(x,c))/factorial(c);
    }
    return cos;
}