#include<iostream>
int main()
{
    int m, n;
    std::cout<<"Enter the dimension of matrix : ";
    std::cin>>m>>n;
    auto *a = new int[m][10];
    std::cout<<"Enter th elements of Array :\n";
    for (int i = 0; i < m; i++)
    {
        for (int  j = 0; j < n; j++)
        {
            std::cin>>a[i][j];
        }
        
    }
    return 0;
}