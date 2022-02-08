//friend class example:
#include<iostream>
using namespace std;
class alpha
{
private:
    int x;
public:
    void setdata(int d)
    {
        x=d;
    }
    friend class beta;
};
class beta
{
 public:
     void func(alpha a){
     cout<<a.x<<endl;
     }
};
int main()
{
alpha b;
b.setdata(55);
beta c;
c.func(b);
return 0;
}
