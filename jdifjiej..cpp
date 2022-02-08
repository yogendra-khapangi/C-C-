#include<iostream>
using namespace std;
int main(){
int x=3;
int &y=x;
cout<<"x="<<x<<"\t";
cout<<"y="<<y<<endl;
y=8+5;
cout<<"reference variable";
cout<<"x="<<x<<"\t";
cout<<"y="<<y<<endl;

}
