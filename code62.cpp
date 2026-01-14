//program to differentiate between local and member variable using this
#include<iostream>
#include<string>
using namespace std;
class member{
string  aadhar;
    public:
    string name;   //member variable
    string address;
    int age;
member(string name,string address, string aadhar,int age) {
this->name = name;
this-> address  = address;
this-> aadhar  = aadhar;
this->age   = age;

}
void display(){
    cout<<"name:  "<<name <<endl;
        cout<<"address:  "<<address <<endl;
    cout<<"aadhar : "<<aadhar <<endl;
    cout<<"age:  "<<age <<endl;

}
};
int main(){
    string a,b,q;
    int i;
    cout<<"enter name , address , aadhar , age "<<endl;
    getline(cin,a);
    getline(cin,b);
    getline(cin,q);
    cin>>i;
    member m1(a,b,q,i);
    m1.display();

}