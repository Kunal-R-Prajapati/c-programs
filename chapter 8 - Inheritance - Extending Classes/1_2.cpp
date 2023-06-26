#include<iostream>
#include<cmath>
using namespace std;
class ACCOUNT
{
protected:
    string name;
    string account_no;
    double balance;
    int type;
public:
    ACCOUNT(string n, string no,double b, int ty)
    {
        name = n;
        account_no = no;
        balance = b;
        type = ty;
    }
    void details()
    {
        cout<<"Name : "<<name<<"\nAccount No. : "<<account_no<<endl;
        cout<<"Balance : "<<balance<<"\nType : "<<type<<endl;
    }
    void check_balance()
    {
        cout<<"Balance : "<<balance<<endl;
    }
    void deposit()
    {
        double amt;
        cout<<"Enter the amount to depoait : ";
        cin>>amt;
        cout<<"Transaction is processing.. \n";
        balance += amt;
        cout<<"Transaction Completed \n";
        check_balance();            
    }
    void withdrawl()
    {
        double amt;
        cout<<"Enter the amount to withdraw : ";
        cin>>amt;
        if (amt>balance)
        {
            cout<<"Not sufficirnt funds in your account. "<<endl;
        }
        else
        {
            cout<<"Transaction is processing.. \n";
            balance -= amt;
            cout<<"Transaction Completed \n";
            cout<<"Remaining ";
            check_balance();            
        }
    }
};
class SAVING : public ACCOUNT
{
private:
    int n;
    double rate;
    double interest;
    double time;
    double amt;
public:
    SAVING(string n, string no,double b, int ty,double r,double t):
        ACCOUNT(n,no,b,ty)
    {
        type = 1;
        rate = r;
        interest = 0;
        time = t;
        amt=0;
        n=4;
    }
    void compound_interst()
    {
        amt = balance *pow((1 + n*rate),n*time);
        balance = amt;
    }
};
class CURRENT : public ACCOUNT
{
private:
    double minimum_balance;
    double penealty;   
public:
    CURRENT(string n, string no,double b, int ty,double min,double pen):
        ACCOUNT(n,no,b,ty)
    {
        minimum_balance = min;
        penealty = pen;
        type = 0;
    }    
    void impose_penealty()
    {
        if (balance < minimum_balance)
        {
            balance -= penealty;
        }
    }
};
int main()
{
    CURRENT c1("Kunal","290831902367531",2300.0,0,500.0,20.0),
        c2("Rohan","903281472849120",200.0,0,500.0,20.0);
    SAVING s1("Kajal","123456789876345",1000.0,1,0.1,2.0);
    c1.details();
//    c1.check_balance();
    c1.impose_penealty();
    c1.withdrawl();
    c1.check_balance();
    c1.impose_penealty();
    c1.deposit();
    cout<<"\n\n"<<endl;
    c2.details();
    //c2.check_balance();
    c2.impose_penealty();
    c2.withdrawl();
    c2.check_balance();
    c2.impose_penealty();
    c2.deposit();
    cout<<"\n\n"<<endl;
    s1.details();
    s1.deposit();
    s1.check_balance();
    s1.withdrawl();
    s1.check_balance();
    s1.compound_interst();
    s1.check_balance();
}