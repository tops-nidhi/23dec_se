#include<iostream>
using namespace std;
class A
{
public:
    virtual int data()
    {
        cout<<"\nThis is Base class.\n";
        return 0;
    }
};
class  B : public A{
public: 
    int data()
    {
        cout<<"\nThis is Derived class.\n";
        return 0;
    }
};
int main()
{
    A *a;
    B b;
    a = &b;
    a->data();
    return 0;
}