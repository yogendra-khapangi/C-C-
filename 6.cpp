#include<iostream>
using namespace std;
namespace digit{
int count=0;
}
namespace character{
int count=0;
}
namespace other{
int count=0;
}
int main(){
char str[40];
cout<<"enter character number and other character";
cin.getline(str,40);
int i=0;
while(str[i]!='\n')
{
    if(isdigit(str[i]))
        digit::count++;
    else if(isalpha(str[i]))
        character::count++;
    else
        other::count++;
    i++;
}
cout<<"number of digit="<<digit::count<<endl;
cout<<"number of character="<<character::count<<endl;
cout<<"number of other character="<<other::count<<endl;
return 0;
}

