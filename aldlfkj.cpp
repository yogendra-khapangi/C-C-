#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class B;
class A
{
private:
    int a;
public:
    void setvalue(){
    cout<<"Enter the first number.";
    cin>>a;
    }
    friend void add(A,B);
};
class B
{
private:
    int b;
public:
    void setvalue(){
    cout<<"Enter the first number.";
    cin>>b;
    }
    friend void add(A,B);
};
void add(A j,B k)
{
  cout<<"addition of two number is "<<j.a+k.b<<endl;
}
int main()
{
    A n;
    B m;
    n.setvalue();
    m.setvalue();
    add(n,m);
    return 0;
}
