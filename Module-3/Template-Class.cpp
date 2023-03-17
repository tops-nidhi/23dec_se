#include<iostream>
using namespace std;
template <typename T>
class Template
{
public:
    T div(T a, T b)
    {
        return a/b;
    };

};
int main(int argc, char const *argv[])
{
    Template <int> temp;
    cout<<endl<<temp.div(12, 2);
    
    Template <float> temp2;
    cout<<endl<<temp2.div(12, 5);
    return 0;
}
