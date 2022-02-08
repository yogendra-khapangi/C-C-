#include<iostream>
using namespace std;
template<class T>
void display(T a,T b){
    cout<<"a="<<a<<endl<<"b="<<b;
}
int main(){
int p=9,q=8;
display(p,q);
return 0;
}
