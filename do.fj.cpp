#include<iostream>
using namespace std;
int main(){
try{
    int age;
cout<<"Enter your age,please.";
cin>>age;
if(age<=18)
    {
    cout<<"you are a voter.";
}
else
{
    throw (age);
}
}
catch(int my){
cout<<"the age is "<<my;
}
}
