#include<iostream>
using namespace std;
class calculation{
private:
    int real,img;
public:
    calculation(){
    real=0;
    img=0;
    }
    calculation(int a,int b){
    real=a;
    img=b;
    }
    void input(){
    cout<<"Enter data of complex first data is real and second data is img:";
    cin>>real;
    cin>>img;
    }
    void show(){
    cout<<endl<<"the enter data is:"<<endl<<real<<"+"<<img<<"i";
    }
    void sum();
    void multi();
    void sub();
};
int main():
