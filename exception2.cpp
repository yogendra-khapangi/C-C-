#include<iostream>
using namespace std;
void divide(int a,int b){


    if(b==0){
        throw b;
    }
    else{
        cout<<"result="<<(a/b)<<endl;
    }

}
int main()
{
    int a,b;
    cout<<"Enter the value of a and b";
    cin>>a>>b;
     try{
     divide(a,b);
     }

    catch(...){
    cout<<"Exception is occurred.";
    }
}

