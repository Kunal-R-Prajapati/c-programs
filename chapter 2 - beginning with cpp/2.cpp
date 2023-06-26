#include<iostream>
using namespace std;
int main()
{
    int a, b;
    cout << "Enter two numbers : ";  // c++ syntax
    cin >> a >> b;
    if ( a > b)
    {
        printf("%d is greater ",a); //c printf function
    }
    else
        printf("%d is greater ",b);
    return 0;
}