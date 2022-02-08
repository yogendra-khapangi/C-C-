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
char str[]="1.neapl 2.india 3.china";
int i=0;
while(str[i]!='\0')
{
    if(isdigit(str[i]))
        digit::count++;
    else if(isalpha(str[i]))
        character::count++;
    else
        other::count++;
    i++;
}
cout<<"Number of digit="<<digit::count<<endl;
cout<<"Number of character="<<character::count<<endl;
cout<<"Number of other characters="<<other::count<<endl;
return 0;
}
