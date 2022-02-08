#include<iostream>
using namespace std;
class complex
{
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
    cin>>real>>img;
    }
    void display(){
    cout<<"real="<<real<<endl<<"img="<<img;
    }
};
int main(){
complex c1,c2(2,3);
c2.display();
}
