#include<iostream>
using namespace std;
int& min(int &a,int &b)
{
    if(a<b)
    {
        return a;
    }
    else{
        return b;
    }
}
int main()
{
    int a,b;
    cout<<"Enter the two number.";
    cin>>a>>b;
    min(a,b)=0;
    cout<<"a="<<a<<",b="<<b<<endl;
    return 0;
}
