#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    float x;
    cout<<"Enter value of a, b , c in order : ";
    cin >> a >>b >> c;
    x = (float)(a/b-c);
    cout<<"\nValue of x = "<<x<<endl;
    return 0;
}