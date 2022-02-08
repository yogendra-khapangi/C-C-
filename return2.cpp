
#include<iostream>
using namespace std;
int* min(int *a,int *b)
{
    if(*a<*b)
    {
        return a;
    }
    else{
        return b;
    }
}
int main()
{
    int a,b;

    cout<<"Enter the two number.";
    cin>>a>>b;
  int *m=min(&a,&b);
    cout<<"Smaller element is="<<*m;
    return 0;
}
