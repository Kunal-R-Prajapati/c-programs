/*vector location declaraion.
vector v(10) not working in class but working in int main()
*/
#include<iostream>
#include<vector>
using namespace std;

class vect
{
private:
public:
    vector<int>  ve1 ;
    vect(/* args */);
    void display();
    ~vect();
};

vect::vect(/* args */)
{
    cout<<"constructor"<<endl;
    for (int i = 0; i < 10; i++)
    {
        ve1.push_back(i);
    }
}
void vect::display()
{
    for (auto i = ve1.begin(); i != ve1.end(); i++)
    {
        cout<<" "<<*i;
    }
}
vect::~vect()
{
    ve1.clear();
    cout<<"\ndestructor"<<endl;
}

int main()
{
    int j;
    vector<int> vect1(10);
    vect v;
    v.display();
    vector<int>::iterator i;
    for (i = vect1.begin(),j=0; i < vect1.end(); i++,j++)
    {
        vect1.push_back(j);
    }
    for (i = vect1.begin(),j=0; i < vect1.end(); i++,j++)
    {
        cout<<vect1.at(j)<<endl;
    }
}