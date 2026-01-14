//nested classes
#include<iostream>
#include<string>
using namespace std;
class school{
    public:
    string school_name;
    string address;
    string board;
    class person {
public:
        string student_name;
        string course;
        string reg_no;
int duration;
    };
};
int main(){
    school s1;
    school  :: person p1;
    cout<<"enter student's details"<<endl;
    cout<<"school name : "<<endl;
    getline(cin,s1.school_name);
    cout<<"school address : "<<endl;
    getline(cin,s1.address);
    cout<<"school board "<<endl;
    getline(cin,s1.board);
    cout<<"student name: "<<endl;
    getline(cin,p1.student_name);
    cout<<"course:  "<<endl;
    getline(cin,p1.course);
    cout<<"reg no : "<<endl;
    getline(cin,p1.reg_no);
    cout<<"course duration"<<endl;
    cin>>p1.duration;
    cout<<"school name :  "<<s1.school_name<<endl;
        cout<<"school  address :  "<<s1.address<<endl;
    cout<<"school board :  "<<s1.board<<endl;
    cout<<"student name :  "<<p1.student_name<<endl;
    cout<<"student course :  "<<p1.course<<endl;
    cout<<"student reg no:  "<<p1.reg_no<<endl;
    cout<<"course duration :  "<<p1.duration<<endl;

}