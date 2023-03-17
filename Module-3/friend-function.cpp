#include<iostream>
using namespace std;
class Friend
{
    int no;
public:
    friend int data(Friend &fn);
};
int data(Friend &fn)
{
    cout<<"Enter the value of no:";
    cin>>fn.no;
    cout<<"\nValue of no is:"<<fn.no;
    return 0;
}
int main(int argc, char const *argv[])
{
    Friend obj;
    data(obj);
    return 0;
}
