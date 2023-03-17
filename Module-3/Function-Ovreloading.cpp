#include<iostream>
using namespace std;
class Overloading
{
public:
    int add(int a, int b)
    {
        cout<<endl<<"Addition is"<<a+b;
        return 0;
    }
    int add(int a, int b, int c)
    {
        // cout<<"";
        return a+b+c;
    }
};
int main()
{
    Overloading over;
    over.add(12,23);
    cout<<endl<<over.add(12,23,45);
    return 0;
}