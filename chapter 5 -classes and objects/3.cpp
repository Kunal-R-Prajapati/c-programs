#include<iostream>
#include<cstring>
using namespace std;
class bank_account
{
private:
    string name;
    char account_no[20];
    int type;
    enum {
        Saving,
        Current
    };
    float balance;
public:
    void initial();
    void deposit();
    void withdraw();
    void display();
};
void bank_account::initial()
{
    name="XXXX";
    strcpy(account_no,"xxxx xxxx xxxx xxxx");
    type = Saving;
    balance = 1000.0;
}
void bank_account::deposit()
{
    float dep;
    cout<<"Enter the amount You want to deposit : ";
    cin>>dep;
    balance = balance+ dep;
}
void bank_account::withdraw()
{
    float wit;
    cout<<"\nBalance : "<<balance;
    cout<<"\nEnter the amount to withdraw : ";
    cin >>wit;
    balance -= wit;
    cout<<"\nRemaining Balance : "<<balance;
}
void bank_account::display()
{
    cout<<"\nName : "<<name;
    cout<<"\nAccount No. : "<<account_no;
    cout<<"\nType : "<<type;
    cout<<"\nBalance : "<<balance<<endl;
}
int main()
{
    bank_account bank[10];
    return 0;
}