#include<iostream>
using namespace std;
class sample{
private:
    float a,b;
    public:
    void getvalue(){
    a=4;
    b=39;
       }
    friend float mean(sample);
};
float mean(sample s){
return (s.a+s.b)/2;
}
int main(){
sample e;
e.getvalue();
cout<<"mean="<<mean(e);
}
