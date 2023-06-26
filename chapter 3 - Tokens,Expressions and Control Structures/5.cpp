#include<iostream>
int main()
{
    int a[6]={0,0,0,0,0} ,b=0;
    std::cout<<"Hello there !\nPlease start entering number to count vote\n Enter -1 to finish .\n";
    std::cin>>b;
    while (b != -1)
    {
        switch (b)
        {
        case 1:
            a[1]++;
            break;
        case 2:
            a[2]++;
            break;
        case 3:
            a[3]++;
            break;
        case 4:
            a[4]++;
            break;
        case 5:
            a[5]++;
            break;
        
        default:
            a[0]++;
            break;
        }
        std::cin>>b;
    }
    std::cout<<"Fatal ballot : "<<a[0]<<"\n1st candidate Vote : "<<a[1]<<"\n2nd candidate Vote : "<<a[2]
            <<"\n3rd candidate Vote : "<<a[3]<<"\n4th candidate Vote : "<<a[4]<<"\n5th candidate Vote : "<<a[5]<<std::endl;
    return 0;
}