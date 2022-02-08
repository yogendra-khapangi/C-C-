#include<iostream>
using namespace std;
void exchange(int &a,int &b){
int temp;
temp=a;
a=b;
b=temp;
}
int main(){
int x=3,y=5;
exchange(x,y);
cout<<"After function call\n";
cout<<"x="<<x<<endl<<"y="<<y;
}

