#include<iostream>
using namespace std;
class yogen
{
private:
    int feet;
    int inches;
public:
    void input()
    {
        cout<<"Enter feet and inches."<<endl;
        cin>>feet>>inches;
    }
    yogen operator +(yogen yo)
    {
        yogen ro;
        ro.feet=feet+yo.feet;
        ro.inches=inches+yo.inches;
        return ro;
    }
    void display()
    {
        cout<<"a=("<<feet<<","<<inches<<")"<<endl;
    }
};
int main()
{
    yogen a,b,c;
    a.input();
    b.input();
    c=a+b;
    a.display();
    b.display();
    c.display();
    return 0;
}
