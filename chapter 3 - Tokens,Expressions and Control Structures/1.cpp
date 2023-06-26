#include<iostream>
using namespace std;
class num_swap
{   
public:
    void swap(int & x,int & y);
};
void num_swap::swap(int & x, int & y)
{
    int t;
    t = x;
    x = y;
    y = t;
}
int main()
{
    num_swap num;
    int a ,b;
    cout<<"Enter two to swap: ";
    cin>>a>>b;
    cout<<"Numbers before swap \nA = "<<a<<"\nB = "<<b<<endl;
    num.swap(a,b);
    cout<<"Numbers after swap \nA = "<<a<<"\nB = "<<b<<endl;
    return 0;
}
