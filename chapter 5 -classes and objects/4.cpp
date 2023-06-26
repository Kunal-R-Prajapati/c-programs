#include<iostream>
class vector
{
private:
    float x,y,z;
public:
    void create();
    void sum(vector,vector);
};
void vector::create()
{
    std::cout<<"Enter the x,y,z value of vector respectively : ";
    std::cin>>x>>y>>z;
    std::cout<<std::endl;
}
void vector::sum(vector a,vector b)
{
    x = a.x +b.x;
    y = a.y + b.y;
    z= a.z +b.z;
    std::cout<<"\nX = "<<x<<"\nY = "<<y<<"\nZ = "<<z<<std::endl;
}
int main()
{
    vector a ,b , c;
    a.create();
    b.create();
    c.sum(a,b);
}