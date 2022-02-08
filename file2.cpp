#include<iostream>
#include<fstream>
using namespace std;
int main(){
/*char a[100];
char b[100];
fstream obj1("hari.txt",ios::out);
cout<<"enter the word."<<endl;
cin.getline(a,100);
obj1<<a<<endl;
obj1.close();*/

char b[100];
fstream obj4("hari.txt",ios::app);
cout<<"enter the word."<<endl;
cin.getline(b,100);
obj4<<b<<endl;
obj4.close();

//fstream obj2("hari.txt",ios::in);
//obj2.getline(b,100);
//fstream obj3("ram.txt",ios::out);
//obj3<<b;
//obj2.close();
//obj3.close();
}
