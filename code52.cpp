//parameterized constructor
#include<iostream>
#include<string>
using namespace std;
class citizen{
    public:
    string country;
    string name;
    int age;
citizen(string a,string b,int c){
country=a;
name=b;
age=c;
}
void getinfo(){
cout<<"cuntry name :"<<country<<endl;
cout<<"person name :"<<name<<endl;
cout<<"person age : "<<age<<endl;
}};
int main(){
string c1;
string n1;
int a1;
cout<<"enter country name"<<endl;
getline(cin,c1);
cout<<"enter person name"<<endl;
getline(cin,n1);
cout<<"enter person age"<<endl;
cin>>a1;
citizen p1(c1,n1,a1);
p1.getinfo();
}