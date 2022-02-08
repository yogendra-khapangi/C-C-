#include<iostream>
using namespace std;
class complex{
private:
    int real,img;
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
    cout<<"Enter real and imsginary part."<<endl;
    cin>>real>>img;
    }
    void display(){
    cout<<real<<"+"<<img<<"i"<<endl;
    }
    void sum(complex c1,complex c2){
    real=c1.real+c2.real;
    img=c1.img+c2.img;
    }

};
int main(){
complex c1,c2,c3;
c1.input();
c2.input();
c1.display();
c2.display();
c3.sum(c1,c2);
cout<<endl<<"Ans:";
c3.display();
return 0;
}
