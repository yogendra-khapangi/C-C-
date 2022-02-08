#include<iostream>
using namespace std;
class adding
{
public:
    void sum(int a,int b)
    {
        cout<<"a+b:"<<a+b<<endl;
    }
    void sum(int c,int d,int e)
    {
        cout<<"c+d+e:"<<c+d+e;
    }
};
int main()
{
    adding a;
    a.sum(3,4);
    a.sum(3,4,5);
}
