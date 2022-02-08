#include<iostream>
using namespace std;
template<class T,class H>
class area{
private:
    T length,breadth,a;
public:
    area(){
    length=0;
    breadth=0;
    }
    area(T a,T b){
    length=a;
    breadth=b;
    }
    void input(){
    cout<<"Enter length and breadth.";
    cin>>length>>breadth;
    }
    T calculate(){
    a=length*breadth;
    return a;
    }
    void display(){
    cout<<endl<<"area="<<a;
    }


};
int main(){
area <float>y,<float><int>g(5.7,8);
y.input();
y.calculate();
y.display();
}
