#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    fstream fp;
    char ch;

    fp.open("a.txt",ios::in);
    while(!fp.eof())

    {
        fp>>ch;
        cout<<(char)ch;
    }
    fp.close();
    return 0;
}
