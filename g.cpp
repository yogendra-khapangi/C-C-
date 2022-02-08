#include<iostream>
using namespace std;
class A
{
public:
    void display()
    {
        cout<<"My name is yogendra khapangi magar.";
    }
};
class B
{
public:
    void display()
    {
        cout<<"My mane is not a yogendra khapangi magar";
    }
};
int main()
{
    A g;
    g.B::display();
}
