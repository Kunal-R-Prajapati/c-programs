#include<iostream>
using namespace std;
int main()
{
    int x;
    cout<<"Enter the value of x : ";
    cin>>x;
    cout<<endl;
    for (int i = 1; i <=x ; i++)
    {
        for (int j = 1; j<=i; j++)
        {
            cout<<i<<" ";
        }
        cout<<endl;
    }
    return 0;
}