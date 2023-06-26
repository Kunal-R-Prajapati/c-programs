#include<iostream>
#include<iomanip>
#define SIZE 100

class data
{
private:
    char name[SIZE][SIZE];
    int code[SIZE];
    float cost[SIZE];
public:
    void input_data();
    void display();
};

void data::input_data()
{
    int i=0;
    char c;
    std::cout<<"Enter the data\nName\tCode\tCost\n"<<std::endl;
    for (; i < SIZE; i++)
    {
        std::cin>>name[i]>>code[i]>>cost[i];
        std::cout<<"Do u want to enter more data (y/n) ? ";
        std::cin>>c;
        if (c=='n' || c== 'N')
        {
            break;
        }
        else if(c=='y' || c== 'Y')
        {
            continue;
        }
    }
    code[i+1]=-999;
    cost[i+1]=-999;
}
void data::display()
{
    int i=0;
    std::cout<<std::setprecision(2);
    std::cout<<"NAME\tCODE\tCOST\n";
    std::cout<<"-------------------------------\n";
    while (code[i]!=-999)
    {
        std::cout<<std::setfill('-');
        std::cout<<std::setw(5)<<name[i]<<std::setw(10)<<code[i]<<std::setw(15)<<cost[i]<<std::endl;
        i++;
    }
    std::cout<<"-------------------------------\n";
}
int main()
{
    data d;
    d.input_data();
    d.display();
    return 0;
}