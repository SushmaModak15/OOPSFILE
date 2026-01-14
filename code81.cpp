//single inheritence
#include<iostream>
#include<string>
using namespace std;
class person{
    public:
    string gender ;
    string nationality;

};
class student : public person{
    public:
    string name;
    string course;
    int age;
    int duration;

    void input(){
        cout<<"enter details"<<endl;
      cout<<"gender: "<<endl;
      getline(cin,gender);
       cout<<"nationality : "<<endl;
      getline(cin,nationality);
       cout<<"name: "<<endl;
      getline(cin,name);
       cout<<"course "<<endl;
      getline(cin,course);
      cout<<"age "<<endl;
      cin>>age;
         cout<<"duration "<<endl;
      cin>>duration;
       
    }
void display(){
    cout<<"gender : "<<gender    <<endl;
        cout<<"nationality : "<<nationality    <<endl;
    cout<<" name : "<< name   <<endl;
    cout<<" course : "<<course    <<endl;
    cout<<"age :  "<<age     <<endl;
    cout<<"duration : "<<duration    <<endl;

}



};

int main(){
student s1;
s1.input();
s1.display();





}