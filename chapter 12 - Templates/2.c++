#include<iostream>

using namespace std;

template<class T>
class vector
{
private:
    T x,y,z;
public:
    vector();
    void create();
    void modify();
    void display();
    void operator *(T);
};
template<class T>
vector<T>::vector()
{
    x=0;
    y=0;
    z=0;
}
template<class T>
void vector<T>::create()
{
    std::cout<<"Enter the x,y,z value of vector respectively : ";
    std::cin>>x>>y>>z;
    std::cout<<std::endl;
}
template<class T>
void vector<T>::modify()
{
    char c;
    T n ;
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
template <class T>
void vector<T>::display()
{
    std::cout<<"\nX = "<<x<<"\nY = "<<y<<"\nZ = "<<z<<std::endl;
}
template <class T>
void vector<T>::operator*(T a)
{
    this->x=this->x*a;
    this->y=this->y*a;
    this->z=this->z*a;   
}

int main()
{
    vector <int> ob1;
    vector <char> ob2;
    vector <float> ob3;
    ob1.create();
    ob1.display();
    ob1.modify();
    ob1.display();
    ob1*4;
    ob1.display();
    
    ob2.create();
    ob2.display();
    ob2.modify();
    ob2.display();
    ob2*4;
    ob2.display();
    
    ob3.create();
    ob3.display();
    ob3.modify();
    ob3.display();
    ob3*4;
    ob3.display();
    

}