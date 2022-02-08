#include<iostream>
using namespace std;
template <class T>
void change(T &a,T &b)
{
    T temp;
    temp=a;
    a=b;
    b=temp;
}
int main(){
 int x,y;
 cout<<"Enter the value of x and y.";
 cin>>x>>y;
 change(x,y);
 cout<<"x="<<x<<endl<<"y="<<y;
}
