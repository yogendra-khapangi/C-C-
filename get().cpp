
#include<iostream>
#include<conio.h>
using namespace std;
int main(){
char c;
cin.get(c);
while(c!='\n')
{
    cout<<c;
    cin.get(c);
}
}
