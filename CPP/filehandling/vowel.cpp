#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    fstream fp;
    char ch;
    int cnt=0;

    fp.open("a.txt",ios::in);
    while(!fp.eof())

    {
        fp>>ch;
      if((ch=='a') || (ch=='e'))
     cnt++;
    }
    cout<<"No of vowels"<<cnt<<endl;
    fp.close();
    return 0;
}
