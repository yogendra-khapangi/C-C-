#include<iostream>
using namespace std;

class student
{
private:
    int no;
public:
    void in()
    {
        cout<<"Enter a number."<<endl;
        cin>>no;
    }
    void display()
    {
        cout<<"the roll no. is"<<no<<endl;
    }
    student operator +(student b)
    {
        student d;
        d.no=no+b.no;
        return d;
    }
};
int main()
{
    student a,b,c;
    a.in();
    b.in();
    c=a+b;
    cout<<"a=";
    a.display();
    cout<<"b=";
    b.display();
    cout<<"c=";
    c.display();
    return 0;
}
