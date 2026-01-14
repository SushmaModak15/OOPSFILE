//arithmetic operation
#include<iostream>
#include<string>
using namespace std;
class arithmetic{
    public:
    int a,b;
    int addition,subtraction,multiply,division,modulation;
    void operation(){
        cout<<"enter two numbers "<<endl;
        cin>>a;
        cin>>b;
        cout<<"addition = "<<a+b<<endl;
                cout<<"subtraction = "<<a-b<<endl;
        cout<<"multiplication = "<<a*b<<endl;
        cout<<"divition = "<<a/b<<endl;
        cout<<"modulation = "<<a%b<<endl;
    }
    };
    int main(){
        arithmetic a1;
        a1.operation();
    }
