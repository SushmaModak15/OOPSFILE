// private and public members
#include<iostream>
#include<string>
using namespace std;
class useraccount{
    private :
     string password;
     string gmail;
     
     public:
     string name;
     string nationality;
string dob;

void setter(){
    getline(cin,password);
    getline(cin,gmail);
}
string getter(){
    return password;
    return gmail;
}
};
int main(){
useraccount u1;
cout<<"enter user's details"<<endl;
cout<<"name : "<<endl;
getline(cin,u1.name);
cout<<"nationality : "<<endl;
getline(cin,u1.nationality);
cout<<"date of birth : "<<endl;
getline(cin,u1.dob);
cout<<"enter password and gmail "<<endl;
u1.setter();
cout<<"name : "<<u1.name<<endl;
cout<<" nationality: "<<u1.nationality<<endl;
cout<<"date of birth : "<<u1.dob<<endl;

u1.getter();








}