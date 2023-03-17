#include<iostream>
using namespace std;
class A
{
public:
    float div(float a, int b)
    {
        return a/b;
    }
};
class B
{
public: 
    float div(float a, float b)
    {
        return a/b;
    }
};
int main(int argc, char const *argv[])
{
    A a;
    B b;
    cout<<endl<<a.div(12,5);
    cout<<endl<<b.div(5,2);
    return 0;
}
