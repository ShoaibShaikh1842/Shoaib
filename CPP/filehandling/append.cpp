#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    fstream fp1,fp2;
    char ch;
    //int cnt=0;

    fp1.open("a.txt",ios::in);
    fp2.open("b.txt",ios::app);
    while(!fp1.eof())

    {
        fp1>>ch;
        fp2<<ch;
       }
    fp1.close();
      fp2.close();
    return 0;
}
