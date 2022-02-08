#include<iostream>
using namespace std;
class adding
{
public:
    int a,b;
    void input()
    {
        cout<<"Enter a two number to adding."<<endl;
        cin>>a>>b;
    }
    void sum(){
    cout<<"sum:"<<a+b<<endl;
    }
};
class subtracting
{
public:
    int c,d;
    void input()
    {
        cout<<"Enter a two number to adding."<<endl;
        cin>>c>>d;
    }
    void sub(){
    cout<<"sub:"<<c-d;
    }

};
int main()
{
    adding c1;
    subtracting c2;
    c1.input();
    c1.sum();
    c2.input();
    c2.sub();
}
