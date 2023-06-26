#include<iostream>
#define FtoM 0.3048
#define ItoCM 2.54
using namespace std;
class DB
{
private:
public:
    float inches;
    float feet;
    DB();
};
DB::DB()
{
    cout<<"Enter the distance in feet : ";
    cin>>feet;
    cout<<"Enter the inches : ";
    cin>>inches;
}
class DM
{
private:
public:
    float metre;
    float centimetre;
    DM();
    DM(int);
    friend DM sum(DB,DM);
};
DM::DM()
{
    cout<<"Enter the distance in metre : ";
    cin>>metre;
    cout<<"Enter the  centimetres : ";
    cin>>centimetre;
}
DM::DM(int a)
{
}
DM sum(DB b,DM m)
{
    DM a(0);
    a.metre = m.metre + b.feet * FtoM ;
    a .centimetre = m.centimetre + (b.inches * ItoCM);
    return a;
}
int main()
{
    DM m,n(0);
    DB b;
    int c;
    n = sum(b,m);
    cout<<"Want Output in :\n1. Feet \n2. Metres\nEnter your choice ";
    cin>>c;
    switch (c)

    {
    case 1:
        cout<<"Feet : "<<n.metre*3.28084<<"\nInches : "<<n.centimetre*0.393701<<endl;
        break;
    case 2:
        cout<<"Metre : "<<n.metre<<"\nCentimetre : "<<n.centimetre;
        break;
    default:
        break;
    }
}
