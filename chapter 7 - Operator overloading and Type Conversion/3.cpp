#include<iostream>
using namespace std;
class MAT
{
private:
    int m ,n;
    int **p;
public:
    MAT();
    MAT(int,int);
    void operator +(MAT & );
    void operator -(MAT &);
    void operator *(MAT &);
    friend ostream & operator << (ostream &, MAT &);
    friend istream & operator >> (istream &, MAT &);
    ~MAT();
};

MAT::MAT(/* args */)
{
    m=10;
        n=10;
        p =  new int*[m];
        for (int i = 0; i < m; i++)
        {
            p[i] = new int[n];
        }   
}
MAT::MAT(int a,int b)
{
    m=a;
    n=b;
    p =  new int*[m];
    for (int i = 0; i < m; i++)
    {
        p[i] = new int[n];
    }
}
MAT::~MAT()
{
    for (int i = 0; i < n; i++)
        {
            delete p[i];
        }
    delete p;
}
istream & operator >> (istream &din, MAT &b)
{
    for (int i = 0; i < b.m; i++)
    {
        for (int j=0;j<b.n;j++)
        {
            b.p[i][j] =0 ;
            din>>b.p[i][j];
        }
    }
    return (din);
}
ostream & operator << (ostream &dout, MAT &b)
{
    cout<<endl;
    for (int i = 0; i < b.m; i++)
    {
        for (int j=0;j<b.n;j++)
        {
            cout<<b.p[i][j]<<" ";
        }
        cout<<endl;
    }
    return (dout);
}
void MAT::operator+(MAT &b)
{
    MAT temp(m,n);
    if((b.m == m)&&(b.n == n))
    {
        for (int i = 0; i < m; i++)
        {
            for (int j=0;j<n;j++)
            {
                temp.p[i][j] = p[i][j] + b.p[i][j];
           }
        }
        cout<<temp;
    }
    else
    {
        cout<<"Matrices cannot be addedd :: Dimension miss-matched"<<endl;
    }
}
void MAT::operator-(MAT &b)
{
    MAT temp(m,n);
    if((b.m == m)&&(b.n == n))
    {
        for (int i = 0; i < m; i++)
        {
            for (int j=0;j<n;j++)
            {
                temp.p[i][j] = p[i][j] - b.p[i][j];
            }
        }
        cout<<temp;
    }
    else
    {
        cout<<"Matrices cannot be addedd :: Dimension miss-matched"<<endl;
    }
}
void MAT::operator*(MAT &b)
{
    MAT temp;
    if (n == b.m)
    {
        temp = MAT(m,b.n);
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < b.n; j++)
            {
                temp.p[i][j]=0;
                for (int k = 0; k<b.n; k++)
                {
                    temp.p[i][j] += (p[i][k] * b.p[k][j]);
                }
            }
        }
        cout<<temp;
    }
    else
    {
        cout<<"Connot multiply "<<endl;
    }
}
int main()
{
    int x,y;
    cout<<"Enter the Dimension of first array : ";
    cin>>x>>y;
    MAT a(x,y);
    cout<<"Enter the Dimension of second array : ";
    cin>>x>>y;
    MAT b(x,y);
    cout<<"\nEnter The elements of array :\n";
    cin>>a;
    cout<<"\nEnter The elements of array :\n";
    cin>>b;
    cout<<"Entered Array:\n ";
    cout<<a<<"\n"<<b;
    cout<<endl;
    cout<<"Addition : ";
    a + b;
    cout<<"Substraction : ";
    a - b;
    cout<<"Multiplication : ";
    a * b;
    return 0;
}