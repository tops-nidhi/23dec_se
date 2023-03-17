#include<iostream>
using namespace std;
class A
{
    public:
    virtual int data();
};
class B : public A
{
    public:
    int data()
    {
        cout<<"this is virtual polymorphisam.";
        return 0;
    }
};
int main()
{
    B b;
    A *a = &b;
    a->data();
}