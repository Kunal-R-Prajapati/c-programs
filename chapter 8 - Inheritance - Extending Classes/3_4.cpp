#include<iostream>
using namespace std;
class staff
{
protected:
    int code;
    string name;
public:
    staff(int c, string n)
    {
        code = c;
        name = n;
    }
};

class education
{
protected:
    string education_qualification, pro_qualification;
public:
    education(string ed, string pro)
    {
        education_qualification = ed;
        pro_qualification = pro;
    }
};

class teacher  : protected staff , protected education
{
private:
    string subject,publication;
public:
    teacher(int c,string n,string ed,string pro,string sub,string pub) : 
        staff(c,n), education(ed,pro)
    {
        subject = sub;
        publication = pub;
    }
};
class officer : protected staff , protected education
{
private:
    char grade;
public:
    officer(int c,string n ,string ed,string pro,char a) : 
        staff(c,n), education(ed,pro)
    {
        grade = a;
    }
};
class typist : protected staff
{
protected:
    float speed;
public:
    typist(int c,string n , float s) : staff(c,n)
    {
        speed = s;
    }
};

class regular_typist : protected typist
{
private:
    float salary;
public:
    regular_typist(int c,string n , float s,float sal): 
        typist(c,n,s)
    {
        salary = sal;
    }
};

class casual_typist : protected typist
{
private:
    float daily_wage;
public:
    casual_typist(int c,string n , float s,float sal): 
       typist(c,n,s)
    {
        daily_wage = sal;
    }
};
int main()
{

}