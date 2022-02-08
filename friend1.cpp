#include<iostream>
using namespace std;
class A;
class B
{
    int b;
public:
    void input(int x)
    {
        b=x;
    }
    void disp()
    {
        cout<<"the value of b="<<b<<endl;
    }
    friend void add(A,B);
};
class A
{
    int a;
public:
    void input(int y)
    {
        a=y;
    }
    void disp()
    {
        cout<<"the value of a="<<a<<endl;
    }
    friend void add(A,B);
};
void add(A obj1,B obj2)
{
    cout<<"addition of A & B is "<<obj1.a+obj2.b;
}
int main()
{
    A a;
    B b;
    a.input(600);
    b.input(300);
    a.disp();
    b.disp();
    add(a,b);
    return 0;
}
