#include<iostream>
#define MAX(a,b,c) (a>b)?((a>c)?a:c):((b>c)?b:c)
int main()
{
    int a, b,c,max;
    std::cout<<"Enter the three numbers : ";
    std::cin>>a>>b>>c;
    max = MAX(a,b,c);
    std::cout<<"\nLargest Number is : "<< max <<std::endl;
    return 0;
}
