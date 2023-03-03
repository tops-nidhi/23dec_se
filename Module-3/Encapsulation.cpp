#include<iostream>
using namespace std;
class Capsual{
    int a, b;
public:
    Capsual(int x, int y)
    {
        a = x;
        b = y;
        cout<<"Value of a is:"<<a<<endl<<"Value of b is:"<<b;
    }
};
int main()
{
    Capsual cap(12,23);
    // cap.
}