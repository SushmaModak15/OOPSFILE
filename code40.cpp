#include<iostream>

using namespace std;

    struct student{
    string name;
    string course;
    int reg_no;
    int cgpa;
    int duration;
    } s1;
int main(){
    
    cout<<"enter students details "<<endl;
cout<<" name : "<<endl;
getline(cin,s1.name);
cout<<" course : "<<endl;
getline(cin,s1.course);
cout<<" reg_no : "<<endl;
cin>>s1.reg_no;
cout<<" cgpa: "<<endl;
cin>>s1.cgpa;
cout<<" duration : "<<endl;
cin>>s1.duration;

cout<<"name= "<<s1.name<<endl;
cout<<"course= "<<s1.course<<endl;
cout<<"reg no= "<<s1.reg_no<<endl;
cout<<"cgpa= "<<s1.cgpa<<endl;
cout<<"durtion= "<<s1.duration<<endl;


}
