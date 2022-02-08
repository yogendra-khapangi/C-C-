#include<iostream>
using namespace std;
float cal(float a,float b,float c){
float si;
return ((a*b*c)/100);
}
int main(){
float p,t,r,g;
cout<<"Enter a value of p , t and r";
cin>>p>>t>>r;
g=cal(p,t,r);
cout<<"si="<<g;
}


