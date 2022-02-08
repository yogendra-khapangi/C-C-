#include<iostream>
enum days{sunday=1,monday,tuesday,wednesday,thursday,friday,saturday};
using namespace std;
int main(){
enum days today=monday;
switch(today)
{
    case 1:
    cout<<"Today is sunday.";
    break;
    case 2:
    cout<<"Today is monday";
    break;
    case 3:
        cout<<"Today is tuesday";
    break;
    case 4:
        cout<<"Today is wednesday";
    break;
    case 5:
        cout<<"Today is thursday";
    break;
    case 6:
        cout<<"Today is friday";
    break;
    case 7:
        cout<<"Today is saturday";

    break;
    default:
            cout<<"Invalid input.";

}

}
