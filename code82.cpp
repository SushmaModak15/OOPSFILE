//multilevel inheritence
#include<iostream>
#include<string>
using namespace std;
class country{
    public:
    string country_name;
    string contenent;
    string capital; 
    string pm;
};
class state:public country{
    public:

string state_name;
string sate_capital;
string cm;
};
class person : public state{
    public:
    string name_of_the_person;
    string address;
    int age;
    void setinfo(){
        cout<<"enter person's details"<<endl;
        cout<<"country name : " <<endl;
        getline(cin,country_name);
          cout<<"contenent : "<<endl;
        getline(cin,contenent);
          cout<<"capital :  "<<endl;
        getline(cin,capital);
          cout<<"pm :  "<<endl;
        getline(cin,pm);
          cout<<"state name : "<<endl;
        getline(cin,state_name); 
         cout<<"cm  "<<endl;
        getline(cin,cm);
          cout<<"name of the person :  "<<endl;
        getline(cin,name_of_the_person);
        cout<<"address : "<<endl;
        getline(cin,address);
          cout<<" age : "<<endl;
        cin>>age;
    }
    void getinfo(){
        cout<<"country : "<<country_name   <<endl;
                cout<<"contenent : "<<contenent  <<endl;
        cout<<"capital : "<<capital   <<endl;
        cout<<"PM : "<< pm  <<endl;
        cout<<"state : "<<state_name   <<endl;
        cout<<"CM : "<< cm  <<endl;
        cout<<"person name : "<< name_of_the_person  <<endl;
        cout<<" address: "<<address   <<endl;
        cout<<"age : "<< age  <<endl;

    }
};
int main(){
    person p1;
    p1.setinfo();
    p1.getinfo();
}

