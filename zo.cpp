#include<iostream>
using namespace std;
class area{
private:
    int length,breadth;
public:
    area(){
    length=0;
    breadth=0;
    }
    area(int a,int b){
    length=a;
    breadth=b;
    }
    void input(){
    cout<<"Enter a length and breadth of box:";
    cin>>length>>breadth;
    }
    void display(int a,int b){
    cout<<"The area of box is:"<<length*breadth;
    }


};
int main(){
area a,b;
int t=9,y=9;
a.display(t,y);
}
