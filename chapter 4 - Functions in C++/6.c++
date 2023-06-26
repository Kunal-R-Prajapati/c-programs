#include<iostream>
inline int Max(int a,int b, int c)
{
    return (a>b)?((a>c)?a:c):((b>c)?b:c);
}
int main()
{
    int a, b,c;
    std::cout<<"Enter the three numbers : ";
    std::cin>>a>>b>>c;
    std::cout<<"\nLargest Number is : "<< Max(a,b,c) <<std::endl;
    return 0;
}