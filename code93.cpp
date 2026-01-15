//virtual base class
#include<iostream>
#include<string>
using namespace std;
class school{
    public:
    string name;
    string address;
    school(string a,string b){
        name=a;
        address=b;
    }
};
class board :virtual public school{
    public :
    float percentage;
    board():school(" "," "){
        percentage=0;
    }

};
class preboard :virtual public school{
public:
float marks;
preboard(): school(" "," "){
    marks=0;
}
};
class student: public board,public preboard{
public:
string name1;
student (string h,string n,string a,float r,int w):school(h,n)
{
    percentage=r;
    marks=w;
}
    void show(){
        cout<<"school name :"<<name<<endl;
         cout<<" address :"<<address<<endl;
        cout<<"student name :"<<name1<<endl;
        cout<<"board percentage :"<<percentage<<endl;
        cout<<"preboard percentage:"<<marks<<endl;


    }
};

 
int main(){
    string e,t,r;
    int m;
    float j;
    cout<<"enter school name "<<endl;
    getline(cin,e);
        cout<<"enter address of school "<<endl;
    getline(cin,t);
        cout<<"enter student  name "<<endl;
    getline(cin,r);
    cout<<"enter board percentage "<<endl;
    cin>>m;
    cout<<"enter preboard percentage"<<endl;
    cin>>j;

    student p(e,t,r,m,j);
p.show();
    

}


