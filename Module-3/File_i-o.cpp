#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    string str;
    ofstream out;
    out.open("D:/Nidhi batch/Software Engineering/23dec_SE/Module-3/hello.txt");
    out<<"Hello";
    out.close();
    ifstream in("D:/Nidhi batch/Software Engineering/23dec_SE/Module-3/hello.txt");
    in>>str;
    cout<<str;
    return 0;
}