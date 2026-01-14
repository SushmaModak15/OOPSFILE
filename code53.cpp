//multiple constructor
#include<iostream>
#include<string>
using namespace std;
class student{
    public:
    string name;
    string course;
    string id;
    int age;
    float cgpa;
    student(){
        cout<<"students details"<<endl;
    }
student(string a,string b,string f){
    name=a;
    course=b;
    id=f;
      cout<<" student's name : "<<name<<endl;
        cout<<"course :"<< course  <<endl;
    cout<<"id : "<<id   <<endl;
}
student(int c,float d) {
    age=c;
    cgpa=d;
    cout<<" age : "<<age <<endl;
    cout<<"cgpa : "<<cgpa <<endl;

}

};
int main(){
    string n1,c1,i1;
    int a1;
    float c2;
    cout<<"enter student name"<<endl;
    getline(cin,n1);
     cout<<"enter student course"<<endl;
    getline(cin,c1);
 cout<<"enter student id"<<endl;
  getline(cin,i1);
 cout<<"enter student age"<<endl;
    cin>>a1;
cout<<"enter cgpa"<<endl;
cin>>c2;
cout<<"calling th constructor where name ,course and id have been declared"<<endl;
student s1(n1,c1,i1);
}



