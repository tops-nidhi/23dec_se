#include<iostream>
using namespace std;
class Abstract 
{
private:    
    int no;    
public:
    Abstract(int n)
    {
        // int n= 10;
        no = n;
        cout<<"Value of no is:"<<no;
    }
};
int main()
{
    Abstract abs(20);
}