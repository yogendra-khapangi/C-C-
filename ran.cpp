#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    char b[100];
    fstream obj4("hari.txt",ios::in);
    cout<<"enter the word."<<endl;
    //obj4.seekg(5,ios::beg);
    obj4.seekg(-4,ios::end);
    obj4.getline(b,100);
    cout<<b<<endl;
    obj4.close();
}
