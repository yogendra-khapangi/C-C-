#include<iostream>
using namespace std;
int& cal(int &a,int &b){
if(a<b)
    return b;
else
    return a;
}
int main(){
int a,b;
cout<<"Enter a value of a,b";
cin>>a>>b;


}


