#include<iostream>
using namespace std;
void min(int a,int b){
int temp;
temp=a;
a=b;
b=temp;
}
int main()
{
    int a,b;
    cout<<"Enter the two number.";
    cin>>a>>b;
    min(a,b);
    cout<<"after function call.."<<endl;
    cout<<"a="<<a<<",b="<<b<<endl;
    return 0;
}
