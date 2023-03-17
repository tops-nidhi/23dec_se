#include<iostream>
using namespace std;
class A
{
    public:
    int aid;
    A()
    {
        // int a;
        cout<<"----------A-----------\n";
        cout<<"Enter your id:";
        cin>>aid;
        // cout<<"Value of a is:"<< a;
    }
};
class B 
{
public: 
    int bid;
    B()
    {
        cout<<"\n-----------B--------\n";
        cout<<"\nEnter the id:";
        cin>>bid;
    }
};
class C
{
public:
    int cid;
    C()
    {
        cout<<"\n------------C-------------\n";
        cout<<"Enter the id:";
        cin>>cid;
    }
};
class Tops : public A, public B, public C
{
public:
    Tops()
    {
        cout<<"\n Id of A is:"<<aid<<endl;
        cout<<"\nId of B is:"<<bid<<endl;
        cout<<"\nId of C is:"<<cid;
    }
};
int main()
{
    Tops t1;
    
}
