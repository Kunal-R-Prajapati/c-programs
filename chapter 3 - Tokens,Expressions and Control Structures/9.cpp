#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int N;
    unsigned int sum {0};
    float mean;
    double deviation{0} ,variance {0}, std_dev{0};
    cout<<"Enter the value of N : ";
    cin>> N;
    for (int i = 1; i <= N; i++)
    {
        sum += i;
    }
    mean = float(sum)/float(N);
    for (float i = 0; i <= N; i+=1)
    {
        deviation += pow((i-mean),2);
    }
    variance = deviation/N;
    std_dev = sqrt(variance);
    cout<<endl;
    cout<<"Mean : "<<mean<<"\nVariance : "<<variance<<"\nStandard deviation : "<<std_dev<<endl;
    return 0;
}