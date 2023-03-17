#include<iostream>
using namespace std;
class Operator
{
    public:
    int no;
    /*
    Operator(int n)
    {
        no = n;
    }
    Operator operator ++()
    {
        // Operator &op;
        no++;
        // return op;
    }
    */
    int data()
    {
        cout<<"\nEnter the value of no:";
        cin>>no;
        return 0;
    }
    Operator operator *(Operator over2)
    {
        Operator over3;
        over3.no = no * over2.no;
        return over3;
    }
    void show()
    {
        cout<<"\nValue of no is:"<<no;
    }
};
int main()
{
    Operator obj;
    obj.data();
    Operator obj2;
    obj2.data();
    Operator obj3;
    obj3 = obj * obj2;
    obj3.show();

    return 0;
}
