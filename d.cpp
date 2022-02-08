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
    complex(int a,int b){
    real=a;
    img=b;
    }
    void input(){
    cout<<"Enter a real and img:";
    cin>>real>>img;
    }
    void output(){
    cout<<"real="<<real<<endl<<"img="<<img;
    }
    void add(complex a,complex b){
    real=a.real+b.real;
    img=a.img+b.img;
    }

} ;
int main(){
complex c1,c2,c3;
c1.input();
c2.input();
c3.add(c1,c2);
c3.output();
}
