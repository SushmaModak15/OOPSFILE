// member function
#include<iostream>
#include<string>
using namespace std;
class course{
public:
    string name;
    string dept;
    int duration;
    void input(){

        cout<<"enter course details "<<endl;
        cout<<" course name "<<endl;
        getline(cin,name);
                cout<<" department "<<endl;
                    getline(cin,dept);
     cout<<" duration "<<endl;
        cin>>duration;
    }
void display(){
    cout<<"name : "<<name<<endl;
        cout<<"department : "<<dept <<endl;
    cout<<"duration : "<<duration<<endl;

}};
  int main(){
    course c1;
    c1.input();
    c1.display();

}