#include<iostream>
using namespace std;
class person
{
protected:
    string name;
    string code;
public:
    person(string n,string c)
    {
        name = n;
        code = c;
    }
    void put_name()
    {
        cout<<"Name : "<<name<<"\nCode : "<<code<<endl;
    }
};
class account : protected virtual person
{
protected:
    float pay;
public:
    account(string n,string c,float p): person(n,c)
    {
        pay = p;
    }
    void put_pay()
    {
        cout<<"Pay : "<<pay<<endl;
    }
};
class admin : virtual protected person
{
protected:
    float experience;
public:
    admin(string n,string c,float e): person(n,c)
    {
        experience = e;
    }
   void put_exp()
    {
        cout<<"Experience : "<<experience<<endl;
    }
};
class master : protected admin , protected account
{
public:
    master(string n, string c , float p, float e) : admin(n,c,e), account(n,c,p)
    {

    }
    void display()
    {
        put_name();
        put_pay();
        put_exp();
    }
};
int main()
{
    master ob("Kunal","123",12,12);
    ob.display();
}