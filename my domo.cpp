#include<iostream>
using namespace std;
class si
{
private:
    int p,t,r;
public:
void input();
void output();

};
void si::input()
{
  cout<<"Enter a value of p,t,r.";
    cin>>p>>t>>r;
}
void si::output(){
cout<<"the simple intress is: "<<(p*t*r)<<endl;
}
class sub: public si
{
private:
    int a,b,c;
public:
    void input();
    void output();
};
void sub::input(){
cout<<"Enter a three number:";
        cin>>a>>b>>c;
}
void sub::output(){
cout<<"The subtraction of three number is:"<<a-b-c;
}
int main()
{
    sub a;
    a.si::input();
    a.si::output();
    a.input();
    a.output();
}
