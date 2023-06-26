#include <iostream>
class vector
{
private:
    float x, y, z;

public:
    vector();
    vector(vector, vector);
    void sum(vector, vector);
};
vector::vector()
{
    std::cout << "Enter the x,y,z value of vector respectively : ";
    std::cin >> x >> y >> z;
    std::cout << std::endl;
}
vector::vector(vector a, vector b)
{
    x = 0;
    y = 0;
    z = 0;
}
void vector::sum(vector a, vector b)
{
    x = a.x + b.x;
    y = a.y + b.y;
    z = a.z + b.z;
    std::cout << "\nX = " << x << "\nY = " << y << "\nZ = " << z << std::endl;
}
int main()
{
    vector a, b, c(a, b);
    c.sum(a, b);
}