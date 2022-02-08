#include<iostream>
using namespace std;
class com
{
public:
    int a,b;
   inline void input(){

      cout<<"Enter a two value."<<endl;
    cin>>a>>b;
   }
  inline  void output(){
  cout<<a<<endl<<b;
  }
};
class con
{
public:
    int a,b,c;
   inline void input(){
   cout<<"Enter a three value."<<endl;
    cin>>a>>b>>c;
   }
  inline  void output(){
  cout<<a<<endl<<b<<endl<<c;
  }
};


int main(){
com a;
a.con::input();
a.con::output();
}
