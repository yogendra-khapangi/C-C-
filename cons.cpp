#include<iostream>
using namespace std;
class yogendra{
int len;
int brd;
public:
    yogendra(){
    len=0;
    brd=0;

    }
    yogendra(int a,int b){
    len=a;
    brd=b;
    }
    void display(){
    cout<<"length="<<len<<endl;
    cout<<"breadth="<<brd<<endl;
    }
    ~yogendra(){
    cout<<"hello yogendra.";
    }
};
int main(){

yogendra y,y1(5,6);
y.display();
y1.display();
}
