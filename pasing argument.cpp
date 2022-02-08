//passing argument to the function
//pass by value
#include<iostream>
using namespace std;
void change(int a,int b){
 int temp;
 temp=a;
 a=b;
 b=temp;
}
int main()
{
    int x,y;
    cout<<"enter the two value."<<endl;
    cin>>x>>y;
    change(x,y);
    cout<<"x="<<x<<endl<<"y="<<y;
    return 0;
}
