//default constructor
#include<iostream>
#include<string>
using namespace std;
class flower{
    public:
     flower(){
        cout<<"Hello ! I am default constructor"<<endl;
     }

};
int main(){
    flower f1; //default constuctor is automatically called
}