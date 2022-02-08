#include<iostream>
#include<fstream>
using namespace std;
int main(){
char a[50];
fstream fp("go.txt",ios::out);
cout<<"enter a word as you like.";
cin.getline(a,100);
fp<<a;
fp.close();
}
