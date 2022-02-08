#include<iostream>
using namespace std;
class A
{

    char a[16];
    public:
    void name()
    {
        cout<<"inter your name.";

        cin>>a;
    }
    void dis()
    {
        cout<<"my name is "<<a<<endl;
    }
    friend void dis2(A);
};
void dis2(A b)
{
    cout<<"hello "<<b.a;
}
int main()
{
    A v;
    v.name();
    v.dis();
    dis2(v);
    return 0;
}
