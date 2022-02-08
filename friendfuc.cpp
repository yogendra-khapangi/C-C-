#include<iostream>
using namespace std;



class alpha
{
private:
    int a,b;
    //cout<<"Enter the value of a and b.";
    //cin>>a>>b;
    public:
    void setvalue(int x,int y){
    x=a;
    y=b;
    }
    friend void display(alpha s);
};
void display(alpha s){
 cout<<"value of a and b is "<<s.a<<","<<s.b;
}

int main(){
alpha v;
v.setvalue(4,5);
display(v);
return 0;
}
