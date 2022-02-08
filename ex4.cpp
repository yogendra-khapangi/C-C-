#include<iostream>
using namespace std;
class teacher{
char name[30];
    int id;
public:
    void getteacher(){
    cout<<"Enter the teacher name and id code:"<<endl;
    cin>>name>>id;
    }
    void displayteacher(){
    cout<<"teacher name="<<name<<endl;
    cout<<"teacher id code="<<id<<endl;
    }
};
class staff{
char dep[58];
int salary;
public:
    void getstaff(){
    cout<<"Enter the department name and salary.\n";
    cin>>dep>>salary;
    }
    void displaystaff(){
    cout<<"department of staff is= "<<dep;
    cout<<"salary of staff is= "<<salary;
    }

};
class coordinator:public teacher,public staff{
char coll[30];
public:
    void getc(){
    getteacher();
    getstaff();
    cout<<"Enter the college name:"<<endl;
    cin>>coll;
    }
    void display(){
    displayteacher();
    displaystaff();
    cout<<"college name="<<coll<<endl;

    }
};
int main(){
coordinator c;
c.getc();
c.display();
return 0;


}
