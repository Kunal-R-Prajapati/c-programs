#include<iostream>

using namespace std;

template<class T>
class MIN
{
private:
    T *a;
    int n;
    T minimum;
public:
    MIN(T *x,int nu)                  
    {
        a = new T[nu];
        for (int i = 0; i < nu; i++)
        {
            a[i] = x[i];
        }
        n= nu;
    }
    void show_min()
    {
        minimum = a[0];
        for (int i = 1; i < n; i++)
        {
            if (a[i]<minimum)
            {
                minimum = a[i];
            }
        }
        cout<<"Minimum In array is : "<<minimum<<endl;
    }
};
int main()
{
    int n =5;
    int a[]={1,2,5,-9,3};
    float b[]={0.8,2.4,6.5,-0.7,8.2};
    MIN<int> m(a,n);
    m.show_min();
    MIN<float> m1(b,n);
    m1.show_min();
    return 0;
}