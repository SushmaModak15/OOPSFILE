//ststic data member
#include<iostream>
#include<string>
using namespace std;
class teacher{
    public:
    string name;
    string course;
    int experience;
     static int total_teacher;
    teacher(string a,string b,int c){
        name=a;
        course=b;
        experience=c;
        total_teacher++;
    }
    void display(){
        cout<<"name : "<<name<<endl;
            cout<<"course : "<<course<<endl;
        cout<<"experience : "<<experience<<endl;
        cout<<"total teacher: "<<total_teacher<<endl;

    }
};
int teacher::total_teacher=0;
int main(){
string h,k,l;
string e,o,p;
int a,t,f;
cout<<"enter teacher name "<<endl;
getline(cin,h);
cout<<"enter course "<<endl;
getline(cin,e);
cout<<"enter experience year "<<endl;
cin>>a;

teacher t1(h,e,a);
t1.display();
cin.ignore();
cout<<"enter teacher name "<<endl;
getline(cin,k);
cout<<"enter course "<<endl;
getline(cin,o);
cout<<"enter experience year "<<endl;
cin>>t;

teacher t2(k,o,t);
t2.display();
cin.ignore();
cout<<"enter teacher name "<<endl;
getline(cin,l);
cout<<"enter course "<<endl;
getline(cin,p);
cout<<"enter experience year "<<endl;
cin>>f;
teacher t3(l,p,f);
t3.display();
}
