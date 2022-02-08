#include<iostream>
using namespace std;
class item{
int code,price;
public:
    item(){
    code=0;
    price=0;
    }
    item(int c,int p){
    code=c;
    price=p;
    }
    item(item &g){
    code=g.code;
    price=g.price;
    }
    void display(){
    cout<<"code="<<code<<endl;
    cout<<"price"<<price<<endl;
    }
    ~item(){
    cout<<"program is end.";
    }
};
int main(){
item v,b(4,5);
item c=b;
v.display();
b.display();
c.display();
return 0;
}
