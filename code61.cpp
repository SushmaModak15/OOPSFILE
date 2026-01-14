// this pointer
#include<iostream>
#include<string>
using namespace std;
class lawyer{
    public:
    string name;
    string dept;
    int experience;
    int age;
    lawyer(string name,string dept,int experience,int age){
        this->name=name;
      this->dept=dept;
        this->experience=experience;
        this->age=age;
    }
void display(){
    cout<<"name : "<<name<<endl;
    cout<<"department : "<< dept <<endl;
    cout<<"experience year : "<< experience <<endl;
      cout<<" age :  "<<age  <<endl;
}  
};
int main(){
    string h,e;
    int d,s;
    cout<<"enter name,department,experience year,age"<<endl;
    getline(cin,h);
    getline(cin,e);
    cin>>d;
    cin>>s;
    lawyer l1(h,e,d,s);
    l1.display();

}
