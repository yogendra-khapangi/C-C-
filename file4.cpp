#include<iostream>
#include<fstream>
using namespace std;
int main(){
char a[400];
fstream obj1("yogendra.txt",ios::out);
cout<<"Enter the word as you like.";
cin.getline(a,400);
obj1<<a<<endl;
obj1.close();
}
