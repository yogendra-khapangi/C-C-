#include<iostream>
using namespace std;
int main(){
char c;
cout<<"Enter world what ever you want.";
cin.get(c);
while(c!='\n')
{
    cin.get(c);
    cout<<c;
}
cout<<c;
}
