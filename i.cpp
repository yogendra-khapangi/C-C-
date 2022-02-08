#include<iostream>
using namespace std;
class complex{
private:
    int real;
    int img;
    public:
    complex(){
    real=0;
    img=0;
    }
    void input(){
    cout<<"enter the values"<<endl;
    cin>>real>>img;
    }
    void output(){
    cout<<real<<"+"<<img<<"j"<<endl;
    }
    void operator=(const complex &a)
    {
        real=a.real;
        img=a.img;
    }
};
int main(){
complex c1,c2;
c1.input();
cout<<"before assignment c1="<<endl;
c1.output();
c2=c1;
cout<<"after assignment c1=";
cout<<c1.output();

}
