#include<iostream>
using namespace std;
int main(){
int a;
cout<<"Enter number of day.";
cin>>a;
switch(a){
case 1:
    cout<<"the day  is sunday.";
    break;
case 2:
    cout<<"The day is monday.";
    break;
case 3:
    cout<<"The day is tusday";
    break;
case 4:
    cout<<"The day is wednesday";
    break;
case 5:
    cout<<"The day is thusday";
    break;
case 6:
    cout<<"The day is friday";
    break;
case 7:
    cout<<"The day is saturday";
    break;
default:
    cout<<"Input commend is invalid.";
}
return 0;
}
