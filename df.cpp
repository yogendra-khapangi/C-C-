#include<iostream>
using namespace std;
class calculation{
private:
    int a,b;
public:
calculation(){
a=0;
b=0;
}
calculation(int c,int d){
a=c;
b=d;
}
void input();
void add();
void sub();
void multi();
void division();
};
void calculation::input(){
cout<<"Enter two value:";
cin>>a>>b;
}
void calculation::add(){
cout<<"addition of two value is: "<<a+b;
}
void calculation::sub(){
cout<<"the subtraction of two value is:"<<a-b;
}
void calculation::multi(){
cout<<"the multiplication of two value is:"<<a*b;

}
void calculation::division(){
cout<<"the division of two value is:"<<a/b;
}
int main(){
calculation g;
g.input();
g.add();
g.sub();
g.multi();
g.division();
return 0;
}
