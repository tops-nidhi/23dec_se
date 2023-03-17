#include<iostream>
using namespace std;
class A
{
private:
    
public:
    A()
    {
        cout<<endl<<"This is class A.";
    };
};
class B : virtual public A
{
private:
    /* data */
public:
    B(/* args */) {
        cout<<endl<<"This is class B.";
    }
};
class C : virtual public A
{
public:  
    C()
    {
        cout<<endl<<"This is class C.";
    }
};
class D :  public B, public C
{
public:
    D()
    {
        cout<<"\nThis is class D.";
    }
};
int main(int argc, char const *argv[])
{
    D d1;
    return 0;
}
