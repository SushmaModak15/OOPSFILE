//compare two objects
#include<iostream>
using namespace std;
class person{
    public:
     int age;
};
int main(){
person p1,p2;
cout<<"enter person1 age"<<endl;
cin>>p1.age;
cout<<"enter person2 age"<<endl;
cin>>p2.age;
if(p1.age>p2.age)
cout<<"person1 is elder "<<endl;
else
cout<<"person2 is elder "<<endl;
}