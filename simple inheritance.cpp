#include<iostream>
using namespace std;
class student{
char *name;
int age;
public:
    student(char *a,int b){
    name=a;
    age=b;
    }
    void display(){
    cout<<"name="<<name<<endl;
    cout<<"age="<<age<<endl;
    }
};
class fstudent:public student{
char *country;
public:
    fstudent(char *a,int b,char *c):student(a,b){
    country=c;
    }
    void displayf(){
    display();
    cout<<"country="<<country<<endl;
    }
};
int main(){
fstudent f("yogendra",20,"nepal");
f.displayf();
}

