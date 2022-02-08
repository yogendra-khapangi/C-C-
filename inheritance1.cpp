//Example of simple inheritance.
#include<iostream>
using namespace std;
class student{
char *name;
int age;
public:
    void getdata(){
        cout<<"enter name and age of student:\n";
        cin>>name>>age;
    }
    student(char *a,int b){
    name=a;
    age=b;
    }

};
class student1:public student{
     char college;
     cout<<"Enter the college name:";
     cin>>college;
     void display(){
     cout<<"name="<<name<<endl<<"age="<<age<<endl<<"college name="<<college;
     }
};
int main(){
student1 f("yogendra",20);
f.display();

}
