//#include<iostream>
//#include<fstream>
#include<bits/stdc++.h>
using namespace std;
int main(){
char a[100],b[100];
ofstream obj("abc.txt");
cout<<"Enter the word as your convenience.";
cin.getline(a,100);
cout<<a;
obj<<a;
obj.close();

fstream obj2("abc.txt",ios::in);
obj2.getline(b,100);
cout<<b<<endl;
obj2.close();
}
