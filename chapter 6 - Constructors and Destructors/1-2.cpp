#include<iostream>
class vector
{
private:
    float x,y,z;
public:
    vector();
    void modify();
    void multiply();
    void diplay();
};
vector::vector()
{
    std::cout<<"Enter the x,y,z value of vector respectively : ";
    std::cin>>x>>y>>z;
    std::cout<<std::endl;
}
void vector::modify()
{
    char c;
    int n;
    std::cout<<"Enter the element u want to modify (x,y,z or 1,2,3) : ";
    std::cin>>c;
    std::cout<<"Enter the new value of element : ";
    std::cin>>n;
    switch (c)
    {
    case '1':
    case 'x':
        x=n;
        break;
    case '2':
    case 'y':
        y=n;
        break;
    case '3':
    case 'z':
        z=n;
        break;
    default:
        std::cout<<"Enter valid choice."<<std::endl;
        modify();
        break;
    }
}
void vector::multiply()
{
    int a;
    std::cout<<"Enter the Scalar : ";
    std::cin>>a;
    x *= float(a);
    y *= float(a);
    z *= float(a);
}
void vector::diplay()
{
    std::cout<<"\nX = "<<x<<"\nY = "<<y<<"\nZ = "<<z<<std::endl;
}

int main()
{
    vector v;
    v.diplay();
    v.modify();
    v.diplay();
    v.multiply();
    v.diplay();
    return 0;
}