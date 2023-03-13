#include<iostream>
using namespace std;
class Grand
{
public:
    int house;
    int gdata()
    {
        std::cout << "Enter the no of house:" << std::endl;
        std::cin >> house;
        return 0;
    }
};
class Perent : public Grand
{
public:  
    int bal;
    int pdata()
    {
        cout<<"Enter the total bank balance:";
        std::cin >> bal;
        return 0;
    }
};
class Child : public Perent 
{
public:
    int car;
    int cdata()
    {
        std::cout << "Enter the no of toal car:" << std::endl;;  
    
        std::cin >> car;
        return 0;
    };
    int show()
    {
        std::cout << "Total no of house is:"<<house << std::endl;
        std::cout << "Total bank balance is:"<< bal << std::endl;
        std::cout << "Total no of car  is:"<< car << std::endl;
    
        return 0;
    }
};
int main()
{
    Child c1;
    c1.gdata();
    c1.pdata();
    c1.cdata();
    c1.show();
}
