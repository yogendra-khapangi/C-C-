
#include<iostream>
using namespace std;
class to
{
private:
    int length;
    int breadth;
public:
    to()            //this is default constructor
    {
        length=0;
        breadth=0;
    }
    to(int a,int b)    //this is parameterized constructor
    {
        length=a;
        breadth=b;
    }

    to(to &x)
    {
        length=x.length;
        breadth=x.breadth;

    }
    void display()
    {
        cout<<"length is "<<length<<endl<<"breadth is "<<breadth<<endl;
    }

};
int main()
{
    to f1;
    to f2(4,5);
    to f3(f2);
    f1.display();
    f2.display();
    f3.display();
    return 0;
}
