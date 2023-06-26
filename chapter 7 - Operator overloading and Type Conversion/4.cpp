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
    bool operator == (String);
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
bool String::operator==(String test)
{
    int count = 0;
    bool result;
    if (len == test.len )
    {
        for (int i = 0; i < len; i++)
        {
            if (st[i] == test.st[i])
            count++;    
        }
    }
    if (count ==len)
    {
        result = true;
    }
    else 
        result = false;
    return result;
}
String::~String()
{
    delete st;
}
int main()
{
    char *n = "Kunal ";
    String s1(n),s2("Hello "),s3(n);
    cout<<boolalpha;
    cout<<"S1 == S2 : "<<(s1==s2)<<endl;
    cout<<"S1 == S3 : "<<(s1==s3)<<endl;
    cout<<"S2 == S3 : "<<(s2==s3)<<endl;
    return 0;
}