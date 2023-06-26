#include<iostream>
int main()
{
    int m;
    std::cout<<"Enter the size of araay : ";
    std::cin>>m;
    int *arr = new int[m];
    for (int i = 0; i < m; i++)
    {
        arr[i]=i;
    }
    for (int i = 0; i < m; i++)
    {
        std::cout<<"\n"<<arr[i];
    }
    return 0;
    delete arr;
}