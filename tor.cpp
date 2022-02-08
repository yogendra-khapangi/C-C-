#include<iostream>
using namespace std;
template<class G,class J>
class complex{
private:
    G real;
    G img;
public:
    complex(){
    real=0;
    img=0;
    }
    complex(G a,G b){
    real=a;
    img=b;
    }
    G input(){
    cin>>real>>img;
    }
    G output(){
    cout<<real<<"+"<<img<<"i"<<endl;
    }
};
int main(){
complex<int>n;
complex<int>r(3,4);
complex<int,float>x(6,6.8);
n.input();
n.output();
r.output();
j.output();
return 0;
}
