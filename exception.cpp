#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"Enter the value of a and b";
    cin>>a>>b;
    try{

    if(b==0){
        throw b;
    }
    else{
        cout<<"result="<<(a/b)<<endl;
    }
    }

    catch(int i){
    cout<<"Divide by zero exception b:"<<i;
    }
}
