#include<iostream>
int main()
{
    void show_matrix(int  a[][10] ,int m, int n);
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
    show_matrix(a,m,n);
    return 0;
}
void show_matrix(int  a[][10],int m,int n)
{
    std::cout<<std::endl;
    for (int i = 0; i < m; i++)
    {
        for (int  j = 0; j < n; j++)
        {
            std::cout<<a[i][j]<<" ";
        }
        std::cout<<std::endl;
    }
    return;
}