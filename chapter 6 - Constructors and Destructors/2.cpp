#include<iostream>
#include<cstring>
#include<string>
using namespace std;
class String
{
private:
    char *st;
    int len;
public:
    String();
    String(char *s);
    void display()
    {
        cout<<st<<endl;
    }
    void join(String &a, String &b);
    ~String();
};

String::String()
{
    len =0;
    st = new char[len+1];
}
String::String(char *s)
{
    len = strlen(s);
    st = new char[len+1];
    strcpy(st,s);
}
void String::join(String &a,String &b)
{
    len = a.len + b.len;
    delete st;
    st = new char[len+1];
    strcpy(st,a.st);
    strcat(st,b.st);
}
String::~String()
{
    delete st;
}
int main()
{
    char *n = "Kunal ";
    String a(n),b("Hello World "),c("Constant "),s1,s2;
    s1.join(a,b);
    s2.join(s1,c);
    a.display();
    b.display();
    c.display();
    s1.display();
    s2.display();
    return 0;
}