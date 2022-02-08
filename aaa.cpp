#include<iostream>
#include<fstream>
using namespace std;
int main(){
char a[80];
ofstream fp("abc.txt");
cout<<"Enter a word."<<endl;
cin.getline(a,80);
cout<<a;
fp<<a;
fp.close();
}
