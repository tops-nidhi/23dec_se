#include<iostream>
using namespace std;
template <class T>
T add(T a, T b)
{
    return a + b;
}
int main(int argc, char const *argv[])
{
    cout<<endl<<add <int> (12, 23);
    cout<<endl<<add <float> (1.2,2.3);
    return 0;
}
