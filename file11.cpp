#include<iostream>
#include<fstream>
using namespace std;
int main(){
char a[400];
fstream obj1("yogendra.txt",ios::app);
cout<<"enter the word.";
cin.getline(a,400);
obj1<<a;
obj1.close();
}

