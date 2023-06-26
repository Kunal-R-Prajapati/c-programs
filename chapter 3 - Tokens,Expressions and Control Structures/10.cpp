#include<iostream>
using namespace std;
int main()
{
    int units;
    float price {0};
    cout<<"Enter the number of units consumed : ";
    cin>> units;
    if (units<=100)
    {
        price = float(units)*0.6;
    }
    else if (units >100 && units <= 300)
    {
        price = (100 * 0.6) + float(units - 100)*0.8;
    }
    else
        price = (100 * 0.6) + (200 * 0.8) + float(units - 300)*0.9 ;

    if (price >300)
    {
        price = price + (0.15 * price);
    }
    cout<<"Bill of Electricity : Rs. "<<price<<endl;
    return 0;
}