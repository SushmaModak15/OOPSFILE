//copy constructor
#include<iostream>
#include<string>
using namespace std;
class employee{
    public:
    string dept;
    float salary;
    int age;
employee(string d1,float s1,int a1){
    dept=d1;
    salary=s1;
    age=a1;
}
void display(){
    cout<<"department : "<<dept<<endl;
        cout<<"salary : "<<salary<<endl;
    cout<<"age : "<<age<<endl;

}
};
int main(){
    string d2;
    float s2;
    int a2;
    cout<<"enter department "<< endl;
    getline(cin,d2);  cin.ignore();  
    cout<<"enter salary "<< endl;
    cin>>s2;
 cout<<"enter age "<< endl;
 cin>>a2;
employee e1(d2,s2,a2);
employee e2(e1);
cout<<"employee 1 details"<<endl;
e1.display();
cout<<"emloyee 2 details"<<endl;
e2.display();

}