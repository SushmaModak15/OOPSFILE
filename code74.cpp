#include<iostream>
#include<string>
using namespace std;
class student{
    private:
    int roll;
    public:
    string name;
    string course;
    student(int r,string a,string d){
        roll=r;
        name=a;
        course=d;
    }
    void show()const{
        cout<<"name :"<<name<<endl;
     cout<<"course :"<<course<<endl;
        cout<<"roll :"<<roll<<endl;
    }

};
int main(){
    int r;
    string w,q;
    cout<<"enter student name:"<<endl;
    getline(cin,w);
    cout<<"course :"<<endl;
    getline(cin,q);
    cout<<"enter roll no :"<<endl;
    cin>>r;
    student h(r,w,q);
    h.show();
}