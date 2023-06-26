#include<iostream>
#include<iomanip>
#include<list>
#include<vector>
#include<algorithm>
#include<array>
using namespace std;
int main()
{
    vector<int> vect1;
    list<int> li;
    array<int,10> arr;
    for (auto i =1; i <=10; i++)
    {
        if(i%2== 0)
            vect1.push_back(i);
        else
            li.push_back(i);
    }
    for (int i=0; i <10; i++)
    {
        arr.at(i) =i;
    }
    for (auto i =vect1.begin(); i != vect1.end(); i++)
    {
        cout<<" "<< *i;
    }
    cout<<endl;
    for (auto i = li.begin(); i !=li.end(); i++)
    {
        cout<<" "<< *i;
    }
    cout<<endl;
    for (auto i = 0; i < arr.size(); i++)
    {
        cout<<arr.at(i)<<" "<<arr[i]<<"  ";
    }
    vector<int>::iterator it;
    list<int>::iterator list_it;
    array<int,10>::iterator a;
    cout<<"\n"<<vect1.size()<<" "<<li.size()<<" "<<arr.size()<<" "<<arr.max_size()<<endl;
    it=find(vect1.begin(),vect1.end(),4);
    cout<<it-vect1.begin()<<endl;
    it =    find(vect1.begin(),vect1.end(),5);
        cout<<it-vect1.begin()<<endl;
    /*list_it = find(li.begin(),li.end(),4);
        cout<<list_it-li.begin()<<endl;
    list_it =    find(li.begin(),li.end(),5);
        cout<<list_it-li.begin()<<endl;*/
    a=    find(arr.begin(),arr.end(),4);
    cout<<a-arr.begin()<<endl;
    a=    find(arr.begin(),arr.end(),14);
    cout<<a-arr.begin()<<endl;
    li.clear();
    vect1.clear();
    return 0;
}