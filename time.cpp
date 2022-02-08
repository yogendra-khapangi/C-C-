#include<iostream>
using namespace std;
class time{
private:
    int hour;
    int mine;
    int sec;
public:
    time(){
    hour=0;
    mine=0;
    sec=0;
    }
    time(int a,int b,int c){
    hour=a;
    mine=b;
    sec=c;
    }
    void input(){
    cout<<"Enter a value of hour mine and sec";
    cin>>hour>>mine>>sec;
    }
    void output(){
    cout<<"hour="<<hour<<endl<<"minute="<<mine<<endl<<"sec="<<sec;
    }
    time operator +(const time &a){
    time c;
    c.hour=this->hour+a.hour;
    c.mine=this->mine+a.mine;
    c.sec=this->sec+a.sec;
    }

};
int main(){
time c1,c2,c3;
c1.input();
c2.input();
c3=c1+c2;
c3.output();
}

