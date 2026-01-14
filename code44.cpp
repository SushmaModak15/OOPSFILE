//read and display employee details
#include<iostream>
#include<string>
using namespace std;
class employee{
    public:
    string name;
    string dept;
    string id;
    int age;
    float salary;
    void input(){
        cout<<"enter employee's name "<<endl;
        cout<<"employee name "<<endl;
        getline(cin,name);
                cout<<"department"<<endl;
                getline(cin,dept);
        cout<<"ID"<<endl;
        getline(cin,id);
        cout<<"age"<<endl;
        cin>>age;
        cout<<"salary"<<endl;
        cin>>salary;
    }
        void display(){
            cout<<" employee name : "<<name<<endl;
                        cout<<" employee department : "<<dept<<endl;
            cout<<" employee ID : "<<id<<endl;
            cout<<" employee age: "<<age<<endl;
            cout<<" employee salary : "<<salary<<endl;
            

        }
    };
    int main(){
        employee e1;
        e1.input();
        e1.display();
    }
